#include<stdio.h>
int main()
{
	int a[100],m,n,i,b,c,d,x,e,f=0,min;
	while(1)
  	{
  		scanf("%d",&n);
		if(n==0)
		{
			printf(\n);
			break;
		}
    	
		for(x=0;x<n;x++)
		{
			scanf("%d",&m);
			a[x]=m;
		}
		b=a[0];
		for(i=0,min=b;i<n;i++)
		{
			if(min>a[i])
		  	{
		  	 	min=a[i];
	 	 	 	c=i;
			}
		}
		if(c!=0)
		{
			d=a[0];
			a[0]=min;
			a[c]=d;
		}
		for(e=0;e<n;e++)
		{
			printf("%d ",a[e]);		       			
		}
		printf("\n");	   
	}
}
	
