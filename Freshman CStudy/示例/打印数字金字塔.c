/*	1.	找出一个二维数组中某个特殊点的位置，即该位置上的元素在该行最大，在该列上最小，
并输出相应信息。*/
#include<stdio.h>
#define n 3
int i,j,t,temp,m;
int num[n][n]={12,10,9,6,4,2,12,10,9};
int main()
{
	for(i=0; i<n; i++)
	{
		for(j=0,temp=0; j<n-1; j++)
		{
			if(num[i][j]<num[i][j+1])
			temp=j+1;
		}
		for(t=0; t<n; t++)
		{
			if(num[i][temp]<num[i][t])
			{
				if(t==n-1)
				printf("第%d行，第%d列",i,temp);
			}
		}
	}
	return 0;
}
	
