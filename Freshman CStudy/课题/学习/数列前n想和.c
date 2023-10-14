#include<stdio.h>
int i,sum;
int main()
{
	for(i=1,sum=0; i<=100; i++)
	{
		sum+=i;
	}
	printf("%d",sum);
}
