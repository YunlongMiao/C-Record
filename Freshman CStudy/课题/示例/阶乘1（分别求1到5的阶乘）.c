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
 	static int result=1;//����resultΪ�ֲ���̬������ÿ�ε��ú�	result���� �ڴ��ַδ�ͷţ���ֵ ���� 
 	result=i*result ;
 	return result;
     
 }
