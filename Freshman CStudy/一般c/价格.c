#include<stdio.h>
int main()
{double x,y,a,z1,z2;
printf("��������޿α��۸�x��ѡ�޿α��۸�y��ѧУ��������ٷֱ�a%\n");
scanf("%lf%lf%lf",&x,&y,&a);
z1=(x+y)*(1-a*0.01);
z2=x+y/2;
if(z1>z2)
printf("��By myself��");
else 
printf("��Through school��");
return 0;
}
