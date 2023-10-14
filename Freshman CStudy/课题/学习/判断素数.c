#include<stdio.h>
int n=0,i=0,k=0;
int main()
{
	scanf("%d", &n);
		if(n==2|| n==3)
			k=1;
		if(n>=5)
		{
			for(i=3; i<n; i++)
			{
				k=1;
				if(n%2==0)
				k=0;
				else 
					for(i=3; i<n; i+=2)
					{
						if(n%i==0)
						k=0; 
					 } 
			}
		}
		if(k=1)
		printf("%d是素数", n);
		else 
			printf("%d不是素数", n);
	return 0; 
	
 } 
