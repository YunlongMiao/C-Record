#include<stdio.h>
int main()
{
	int i,c,n,sum;//nΪ�ܷ� ������߷�sum 
	c=1;//���Դ��� 
	sum=0;//z 
	scanf("%d",&n);
int	x[1000]={1,1};
	for(i=2;sum<n;i++)
	{
		x[i]=x[i-1]+x[i-2];
		sum=x[i];
		c++;
	}sum=x[i-2];
	printf("%d\n%d",c,sum);
}
