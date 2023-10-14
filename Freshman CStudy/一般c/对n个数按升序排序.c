/*有10个地区的面积，要求对它们按由小到大的顺序排列。
解题思路：
排序的规律有两种：一种是“升序”，从小到大；
 另一种是“降序”，从大到小
把题目抽象为：“对n个数按升序排序”
采用起泡法排序.....
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










