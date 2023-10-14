#include<stdio.h>
#define N 100
long long int gcd(long long int a,long long int b)
{
	long long int t,x,y;
	x = a;
	y = b;
	while(b)	//辗转相除法 
	{
		t = a%b;
		a = b;
		b = t;
	}
	return x*y/a;
}
int main()
{
	int i,j,n,t=0;
	long long int a[N],min;   // 因为题目要求，将数据都设为长整型。避免超出内存 
	while(~scanf("%d",&n))	// 循环输入 
	{
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
			for(i=0,j=1;j<n;i++,j++)
			{
				a[j] = gcd(a[i],a[j]); // 通过调用函数实现求两个数的最小公倍数，并保存到 j 的位置 
				t++;
			}
		printf("%lld\n",a[t]);  
		t = 0;
	}
	return 0;
}
