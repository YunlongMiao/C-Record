/*#include<stdio.h>
int main()
{	
	int 
 	int count[2][3]={{1,3},{6,9}};
	printf("%d"£¬count[8][8]);
}*/
#include <stdio.h>
int main()
 {  int i,a[10];
     for (i=0; i<=9;i++)
         a[i]=i;
     for(i=9;i>=0; i--)
         printf("%d ",a[i]);
     printf("\n");
     return 0;
 }

