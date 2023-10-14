#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	int i,j,t,x;
	float aver,sum,num[101],put[100];
	
	for(i=1,num[0]=2; i<101; i++)
		{
			num[i]+=num[i-1]+2;
		}
	while(~scanf("%d%d",&n,&m))
	{
		for(i=0,t=0; i<n; i+=m,t++)
		{
			sum=0;
			for(j=0; j<m; j++)
			{
				sum+=num[i+j];
				aver=sum/m;
			}
			put[t]=aver;
			
		}
			if(n%m!=0)
			{
				i=n-m;
				sum=0;
				for(sum=0 ; i>0; i--)
				{
					sum+=num[i];
					
				}
				aver=sum/(n-m);
				put[t+1]=aver;
				
			}
		x=strlen(put);
		for(i=0; i<x; i++)
		{
			printf("%f",put[i]);
		}
	}
}
