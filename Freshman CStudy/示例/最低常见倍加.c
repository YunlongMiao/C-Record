#include<stdio.h>
#define N 100
long long int gcd(long long int a,long long int b)
{
	long long int t,x,y;
	x = a;
	y = b;
	while(b)	//շת����� 
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
	long long int a[N],min;   // ��Ϊ��ĿҪ�󣬽����ݶ���Ϊ�����͡����ⳬ���ڴ� 
	while(~scanf("%d",&n))	// ѭ������ 
	{
		for(i=0;i<n;i++)
			scanf("%lld",&a[i]);
			for(i=0,j=1;j<n;i++,j++)
			{
				a[j] = gcd(a[i],a[j]); // ͨ�����ú���ʵ��������������С�������������浽 j ��λ�� 
				t++;
			}
		printf("%lld\n",a[t]);  
		t = 0;
	}
	return 0;
}
