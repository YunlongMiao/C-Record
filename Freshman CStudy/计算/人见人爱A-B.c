#include<stdio.h>
#define NUM 100

void judge(int s,int e[]);
int main()
{
	int A[NUM],B[NUM],C[NUM];
	int n,m;
	int i,j,temp;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		while(n||m)
		{
			for(i=0; i<n; i++)
			{
				scanf("%d",&A[i]);
			}
			for(j=0; j<m; j++)
			{
				scanf("%d",&B[j]);
			}
			judge(n,A);
			judge(m,B);
			for(i=0; i<n; i++)
				for(j=0,temp=0; j<m; j++)
				{
					if(A[i]!=B[j] && j==m-1)
					{
						C[temp]=A[i];
						temp++;
					}
				}
			if(temp!=0)
			{
				for(i=0; i<temp; i++)
				printf("%d ",C[i]);
				printf("\n");
			}
			else
				printf("NULL");
		}
	}
} 

void judge(int s,int e[])
{
	int jj,ii,t;
	for(ii=0; ii<s; ii++)
		for(jj=ii+1; jj<s; jj++)
		{
			if(e[ii]>e[jj])
			{
				t=e[ii];
				e[ii]=e[jj];
				e[jj]=t;
			}
		}
}
