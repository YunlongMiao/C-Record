#include<stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	i=(m%n);
	if(i==0)
	{
		printf("YES");
	}else
	printf("NO");
	return 0;
//	printf("%d",i);
 } 
