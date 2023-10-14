#include<stdio.h>
int main()
{
	int i=0, j, t=0, sum=0;
	for(i=1;i<6;i++){
	
		for(t=1, j=1 ; t<=i ;t++){
			j*=t;
		}
			sum+=j;
		
		
	}
	printf("%d", sum);
 } 
