#include<stdio.h>
int main()
{
	int b1=27,b2=23;
	float w1=1.2,w2=3.0,x,t1,t2;
	scanf("%f",&x);
	t1=b1+b2+x/w2;
	t2=x/w1;
	if(t1<t2)
	printf("Bike");
	else if(t1>t2)
	printf("Walk");
	else if(t1=t2)
	printf("All");
	retuen 0;	
}
