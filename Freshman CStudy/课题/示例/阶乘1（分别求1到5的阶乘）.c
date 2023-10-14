#include<stdio.h>
int main()
{
	int fun(int i);
	int i;
	for(i=1;i<6;i++)
	{
		printf("%d!=%d\n",i,fun(i));
	}
	putchar('\n');
	return 0;
	
 } 
 int fun(int i)
 {
 	static int result=1;//定义result为局部静态变量，每次调用后	result变量 内存地址未释放，故值 不变 
 	result=i*result ;
 	return result;
     
 }
