#include<stdio.h>
int main()
{
	int a,b,c,x,i,sum;
	scanf("%d",&x);
	a=x/100;
	b=(x-a*100)/10;
	c=x%10;
//	sum=c*100+b*10+a;
//	printf("%d",sum);
	printf("%d",c);
	printf("%d",b);
	printf("%d",a);
}
