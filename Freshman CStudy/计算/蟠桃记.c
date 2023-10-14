#include<stdio.h>
int main()
{
	int n;
	int i;
	int sum;
	int temp;
	while(~scanf("%d",&n)){
		sum=1;
		for(i=1; i<n; i++){
			sum=(sum+1)*2;
		}
		printf("%d\n", sum);
	}
}
