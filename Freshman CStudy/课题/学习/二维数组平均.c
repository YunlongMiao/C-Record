#include<stdio.h>
int main()
{
	int a[3][4]={{4,3,2,1},{9,8,7,6},{0,5,7,9}};
	int i,n,t,j,sum;
	float aver;
	sum=0;
	aver=0;
	for(i=0;i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			sum=sum+a[i][j];
		}
	}
	aver=sum/(sizeof(a)/4.0);
//	aver=sum/12.0;
	printf("%.3f\n", aver);
	for(i=0;i<3; i++)
		for(j=0; j<4; j++)
		{
			if(a[i][j]<aver)
			a[i][j]=0;
		}
	for(i=0;i<3; i++)
		for(j=0; j<4; j++)
		{
			printf("%d", a[i][j]);
			if(j!=3)
			printf(" ");
			if(j==3)
			printf("\n");
		}
} 
