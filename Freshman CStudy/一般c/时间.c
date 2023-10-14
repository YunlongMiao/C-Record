#include<stdio.h>
int main()
{int bjt,utj;
bjt=0;
utj=0;
scanf("%d",&bjt);
utj=bjt-800;
if(utj>=0)
utj=utj;
else utj+=2400;
printf("utc=%d",utj);
return 0;
}
