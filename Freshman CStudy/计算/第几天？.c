#include<stdio.h>
int x,y,z;
unsigned char s,u;
int i,year;
int MONTH[]={31,28,31,30,31,30,31,31,30,31,30,31};//1 3 5 7 8 10 12 各月份天数 
int main()
{
	int JUDGE(int x);
	int sum;
//	sum=0;
	while(~scanf("%d%c%d%c%d",&x,&s,&y,&u,&z)){
		sum=0;
		JUDGE(x);
		if(i==1)
		MONTH[1]=29;
		for(i=0; i<y-1; i++){
			sum+=MONTH[i];
		}
		sum+=z;
		printf("%d\n", sum);
	}	
}

int JUDGE(int year){

	if((year%400==0)||(year%4==0)&&(year%100!=0))
			
			    i=1;
			else 
				i=0;
	return i;
}
