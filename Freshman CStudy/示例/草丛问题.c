#include<stdio.h>
int main()
{
	char a[100][100]={0};
	int r,c,t,i,j;
	t=0;
	scanf("%d %d",&r, &c);
	for(i=0; i<r; i++)
	{
		scanf("%s", a[i]);
		getchar();
	}
	for(i=0; i<r;i++)
	{
		for(j=0; j<c; j++)
		{
			if(a[i][j]=='#')
			{
				if(a[i][j]==a[i+1][j]||a[i][j]==a[i][j+1])
				{
					continue;
				}
				t++;
			}	
				
		}
	}
	printf("%d", t);
}
