#include<stdio.h>
int main()
{
	int a, b,i,year;
	while(~scanf("%d",&year)){
		if((year%400==0)||(year%4==0)&&(year%100!=0))
		i=1;
		else
		i=0;
		if(i==1)
		{
			printf("Y");
		}else 
		printf("N");
	}
	
	
}
