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
		printf("%d��ż��\n",s);
		else
		printf("%d������\n",s);
		if(t==9)
		printf("���ֺ�Ϊ%d\n",sum);
	}
}
