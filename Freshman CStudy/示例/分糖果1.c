#include<stdio.h>
#include<string.h>
int Not_aver(int a[],int n);//用于判断每个学生的糖果数是否相等，即游戏结束的条件。
int Is_jishu(int x);//判断学生的糖果数是否为奇数，是奇数就加1；
int main()
{
	int a[1000]={0},n;int temp,tmp,i;
	while(scanf("%d",&n)&&n!=0){
		int count=0;
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		while(Not_aver(a,n)){
			for(i=0;i<n;i++)	a[i]=a[i]/2;//把糖果数减半
			for(i=0;i<n;i++){
				if(i==0){//第一个学生拿的是最后一个学生的糖果
					temp=a[i];//暂时储存当前的糖果数
					tmp=a[i+1];//暂时储存下一个位置的糖果数
					a[i]=a[i]+a[n-1];
					a[i]=Is_jishu(a[i]);
				}
				else{
					a[i]=temp+tmp;//从第二个学生开始可以通过暂时存储的数据求得糖果数
					a[i]=Is_jishu(a[i]);
					temp=tmp;//将temp下移
					tmp=a[i+1];//将tmp下移
				}
			}
			count++;//每完成一次交换，计数器加一
		}
		printf("%d %d\n",count,a[0]);
		count=0;memset(a,0,sizeof(a));//对计数器和数组清零
	}
} 
int Not_aver(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1])	
		return true;//有一组不相等，就返回真，游戏继续
	}
	return false;
}
int Is_jishu(int x)
{
	if(x%2==0) return x;
	else		return x+1;
}
