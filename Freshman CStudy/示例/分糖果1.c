#include<stdio.h>
#include<string.h>
int Not_aver(int a[],int n);//�����ж�ÿ��ѧ�����ǹ����Ƿ���ȣ�����Ϸ������������
int Is_jishu(int x);//�ж�ѧ�����ǹ����Ƿ�Ϊ�������������ͼ�1��
int main()
{
	int a[1000]={0},n;int temp,tmp,i;
	while(scanf("%d",&n)&&n!=0){
		int count=0;
		for(i=0;i<n;i++)	scanf("%d",&a[i]);
		while(Not_aver(a,n)){
			for(i=0;i<n;i++)	a[i]=a[i]/2;//���ǹ�������
			for(i=0;i<n;i++){
				if(i==0){//��һ��ѧ���õ������һ��ѧ�����ǹ�
					temp=a[i];//��ʱ���浱ǰ���ǹ���
					tmp=a[i+1];//��ʱ������һ��λ�õ��ǹ���
					a[i]=a[i]+a[n-1];
					a[i]=Is_jishu(a[i]);
				}
				else{
					a[i]=temp+tmp;//�ӵڶ���ѧ����ʼ����ͨ����ʱ�洢����������ǹ���
					a[i]=Is_jishu(a[i]);
					temp=tmp;//��temp����
					tmp=a[i+1];//��tmp����
				}
			}
			count++;//ÿ���һ�ν�������������һ
		}
		printf("%d %d\n",count,a[0]);
		count=0;memset(a,0,sizeof(a));//�Լ���������������
	}
} 
int Not_aver(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1])	
		return true;//��һ�鲻��ȣ��ͷ����棬��Ϸ����
	}
	return false;
}
int Is_jishu(int x)
{
	if(x%2==0) return x;
	else		return x+1;
}
