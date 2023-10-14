#include <stdio.h>
//#include <math.h>

int main() 
{
	void count(int m) ;
	int i = 0;
	int n = 0;
    int x = 0, z = 0,r = 0;
	int j,y,t,sum=0;
	

		scanf("%d", &n);
		while(n)
		{
			scanf("%d",&x );
			int b[x];
			if(x%2==0)
			{
				printf("No number can be output !");
				continue;
			}
			count(x);
		/*	for(i=0;i<x;i++)
			{
				if(b[i]<1)
				continue;
				else
				printf("%d",b[i]);
				if(b[i]!=5)
				printf(" ");
			}					*/
			n--;
		}
			
	
}
	void count(int m) 
	{
		int b[m],i;
		b[0]=m;
		for(i=0;i<m;i++)
		{
		
			if(m%2==0)
			{
				m/=2;
			}else
			 m=3*m+1;
			b[i+1]=m;
			if(m==1)
			break;
		
		for(i=0;i<m;i++)
			{
				if(b[i]==1)
				break;
				else
				printf("%d",b[i]);
				if(b[i]!=5)
				printf(" ");
			}
		}
	}
