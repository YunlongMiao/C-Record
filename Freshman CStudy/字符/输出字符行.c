#include<stdio.h>
int main()
{
	char a[100];
	int i,k,n,t;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		a[i]='A';
	}
	for(t=0; t<n; t++){
		
		for(k=1; k<n-t;k++){
				printf(" ");
			}
			
		for(i=0; i<n; i++){
			
			printf("%c",a[i]);
	
		}
		printf("\n");
	}
		
}
