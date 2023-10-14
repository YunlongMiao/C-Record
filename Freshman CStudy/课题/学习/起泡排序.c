#include <stdio.h>
int main()
{
	int n,j,i;
	int a[10];
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
		printf("\n");
	for(i=0; i<9; i++)
		for(j=0; j<9-i; j++){
			if(a[j]>a[j+1])
			{n=a[j]; a[j]=a[j+1]; a[j+1]=n;}
		}
	for(i=0; i<10; i++){
		printf("case:%d %d\n", i+1, a[i]);
	}
}
