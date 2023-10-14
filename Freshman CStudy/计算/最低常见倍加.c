#include<stdio.h>
int main()
{
	int n;
long long int i,min,temp;
long long int sum[10000];
	while(~scanf("%d",&n))
	{
		for(i=0; i<n; i++)
		{
			scanf("%lld",sum[i]);
		}
		for(i=1,min=sum[0]; i<n; i++)
			if(min>sum[i])
			min=sum[i];
		for( ; ; min*=min)
		{	temp=1;
			for(i=0; i<n; i++)
			{
				if(sum[i]%min!=0)
				{
					temp=0;
					break;
				}
			}
			if(temp==1)
			{
				
				break;
			}
		}
		printf("%lld\n",min);
	}
}
