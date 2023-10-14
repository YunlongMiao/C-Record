#include<stdio.h>
int main()
{
	int n,i=0,t=0;
	while(1){
		scanf("%d", &n);
		if(n==-1)
		break;
		if(n%2==0)
		i++;//Å¼Êý
		else
			t++; 
	}
	printf("%d %d", t, i);
	return 0;
 } 
