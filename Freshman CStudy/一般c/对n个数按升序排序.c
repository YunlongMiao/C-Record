/*��10�������������Ҫ������ǰ���С�����˳�����С�
����˼·��
����Ĺ��������֣�һ���ǡ����򡱣���С����
 ��һ���ǡ����򡱣��Ӵ�С
����Ŀ����Ϊ������n��������������
�������ݷ�����.....
*/ 

  /* for(i=0;i<5;i++)                   
    if (a[i]>a[i+1])     
    { t=a[i];a[i]=a[i+1];a[i+1]=t; }

*/


#include<stdio.h>
int main()
{
int a[10];   
int i,j,t;
printf("input 10 numbers :\n");
for (i=0;i<10;i++)  
    scanf("%d",&a[i]);                  
	printf("\n");
for(j=0;j<9;j++)
	for(i=0;i<9-j;i++) 
	  if (a[i]>a[i+1]) 
	    {t=a[i];a[i]=a[i+1];a[i+1]=t;}
printf("the sorted numbers :\n");
	for(i=0;i<10;i++) 
 	printf("%d ",a[i]);
printf("\n");

}










