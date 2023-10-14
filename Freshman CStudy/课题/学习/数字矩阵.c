#include<stdio.h>
int main()
{
	int i=0, j=0, t=0;
	for(j=1;j<5;j++){
		for(t=1;t<6;t++){
			printf("%d",t*j);
			if(t!=5)
			printf(" ");
			if(t==5)
			printf("\n");
		}
	}
 } 
