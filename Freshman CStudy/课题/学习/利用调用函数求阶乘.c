#include<stdio.h>
int i=0;
int main()
{
	int jiecheng(int n);
	int n,t;
	scanf("%d", &n);
	t=jiecheng(n);
	printf("%d", t);
	return 0;
}

int jiecheng(int n)
{
	int sum=1;
	for(i=2; i<=n; i++)
	{
		sum*=i;
	//	return sum;
	}
	return sum;
}
