#include <stdio.h>
int main()
{ 
	int sum=0,n=1;
 	int i,j;
  	for(j=1;j<=5;j++) {
	    for(i=1;i<=j;i++){
	        n=n*i; 
	} 
	    sum=sum+n;
	    printf("%d!=%d\n",j,n); 
		n=1; 
	    } 
	printf("%d",sum); 
}
