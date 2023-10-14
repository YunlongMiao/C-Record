//2/1 3/2 5/3
#include<stdio.h>
double sum,num,a,b;
int n,temp;
int i;

int main()
{
	a=1;
	b=1;
	scanf("%d",&n);
	for(i=1,sum=0; i<=n; i++)
	{
		num=0;
		temp=a;
		a=a+b;
		b=temp;
		num=a/b;
		sum+=num;
	}
	printf("数列的前%d项和为%.2lf",n,sum);
 } 
