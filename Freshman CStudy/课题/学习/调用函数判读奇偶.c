#include<stdio.h>
#define NAM 10
void judge();
int  num[NAM];
int n,j,i;

int main()
{
	for(i=0; i<10; i++)
	{
		scanf("%d",&num[i]);
	}
		judge(); 
}

void judge()
{
	int t, sum,s;
	for(t=0,sum=0; t<10; t++)
	{
		s=num[t];
		sum+=s;
		if(s%2==0)
		printf("%d是偶数\n",s);
		else
		printf("%d是奇数\n",s);
		if(t==9)
		printf("数字和为%d\n",sum);
	}
}
