#include<stdio.h>
int main()
{
	int n,x,sum,t,pro;
	int num;//[1000];
	while(~scanf("%d",&n))
	{
		for(t=0,pro=1; t<n; t++)
		{
			scanf("%d", &num);
			if(num%2!=0)
			pro*=num;
		}	
		printf("%d\n",pro);
	}
	return 0;
 } 
 
 
 /*
 for(t=0,pro=1; t<n; t++)
			scanf("%d", num[t]);
		for(t=0,pro=1; t<n; t++)
		{
			if(num[t]%2!=0)
			pro*=num[t];
		}	
		printf("%d\n",pro);

#include <stdio.h>
int main()
{
	int n,i,num,mul=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(num%2!=0)
			{
				mul*=num;
			}
		}
		printf("%d\n",mul);
		mul=1;
		
	}
	return 0;
} 
*/
