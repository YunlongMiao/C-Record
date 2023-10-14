#include<stdio.h>
int main()
{
	int year,month,day,sum;
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF)
	{
		sum=0;
		switch(month)
		{
			case 12:sum=sum+30;
			case 11:sum=sum+31;
			case 10:sum=sum+30;
			case 9:sum=sum+31;
			case 8:sum=sum+31;
			case 7:sum=sum+30;
			case 6:sum=sum+31;
			case 5:sum=sum+30;
			case 4:sum=sum+31;
			case 3:if((year%4==0)&&(year%100!=0)||(year%400==0))
				   sum=sum+29;
			       else
				   sum=sum+28;
			case 2:sum=sum+31;
			case 1:sum=sum+day;
		}
		printf("%d\n",sum);
	}
}	

