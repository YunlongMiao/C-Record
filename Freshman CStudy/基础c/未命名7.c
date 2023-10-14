#include<stdio.h>
int main()
{
	int n;
	double j=1,sum=0.00,temp=0.00;
	scanf("%d",&n);
	for(j<n)
	{
		temp=1/j;
		sum+=temp;
		j++;
		}	
	printf("%.2lf",sum);
}
