#include <stdio.h>
//#include <math.h>

int main() 
{
	int i = 0;
	int n = 0;
    int k=0; 
	int j,y,sum=0,c=0;
	char t,p ;

		scanf("%d", &n);
		while(n)
		{
			scanf("%d %d %c %c", &j, &y,&p,&t);
		//	p=t;
			if(t=='?')
			return(n);
			if(j>=y)
			{
				if(j-y==t-48)
				{
					k++;
				}
			}else if(j<t)
			{
				if(y-j==t-48)
				{
					k++;
				}
			}	
				
			
			n--;
		}
			
	
		printf("%d",k);
		
}
