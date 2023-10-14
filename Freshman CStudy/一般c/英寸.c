#include<stdio.h>
int main()
{ double inch,cm,m;
int foot;
	//printf("输入一个长度（cm）");
	scanf("%lf",&cm);
	inch=cm*0.01/0.3048;
	foot=inch/12;
	inch=inch-foot*12;
/*	if((inch-(int)inch>=0.5))
	inch++;*/
	printf("foot=%d inch=%lf",foot,inch);
 return 0;

}
