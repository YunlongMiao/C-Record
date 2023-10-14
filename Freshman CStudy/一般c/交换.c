#include<stdio.h>
int main()
{double a,b,t;
scanf("%lf%lf",&a,&b);
if(a>b){

t=a;
a=b;
b=t;}
printf("%5.3lf %5.3lf",a,b);
return 0;
}
