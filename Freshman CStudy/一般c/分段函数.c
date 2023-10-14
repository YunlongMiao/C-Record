#include<stdio.h>
int main()
{double x,y;
printf("请输入一个未知数x\n");
scanf("%lf",&x);
if(x<0)
y=-1;
else if(x==0)
y=0;
else if(x>0)
y=1;
printf("%.4lf",y);
return 0;
}
