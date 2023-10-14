#include<stdio.h>
int main()
{
	double x,fx;
	scanf("%lf",&x);
	int judge=x<0;
	switch(judge){
		case 1:fx=-1;break;
		case 0:fx=2*x;
	}
	printf("fx=%f",fx);
	
	return 0;
}
