#include<stdio.h>
int main()
{
	char a[80],b[80];
	gets(a);
//	scanf("%s%s",a,b);
	printf("%s\n%s",a);//因缺少相应函数 ，输入时无法带有空格 
}
