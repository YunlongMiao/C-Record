#include<stdio.h>
int main()
{
	int n,x,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		
		if((i%2)!=0){
			
			printf("%d",i);
			if(n%2==0)
			{
				if(i!=n-1)
				printf(" ");
			}
			else if(i!=n)
					printf(" ");
		}
		return 0;
}
