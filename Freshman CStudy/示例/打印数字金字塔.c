/*	1.	�ҳ�һ����ά������ĳ��������λ�ã�����λ���ϵ�Ԫ���ڸ�������ڸ�������С��
�������Ӧ��Ϣ��*/
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
				printf("��%d�У���%d��",i,temp);
			}
		}
	}
	return 0;
}
	
