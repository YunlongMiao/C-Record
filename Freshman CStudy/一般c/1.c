#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,p,q,x1,x2;
printf("ÊäÈëa,b,cµÄÖµ");
scanf("%lf%lf%lf",&a,&b,&c);
p=-b/(2*a);
q=(sqrt(b*b-4*a*c)/(2*a));
x1=q+p;
x2=p-q;
printf("%lf%lf",x1,x2);
return 0;
}
