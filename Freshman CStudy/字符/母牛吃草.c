#include<stdio.h>
int main()
{
	char a[100][100];
	int n,i,j,r,x,c,k,o;
	k=0;
	scanf("%d %d", &r, &c);
	getchar();
	o=r*c;
	for(i=0;i<r; i++)
		for(j=0; j<c; j++){
			scanf("%c", &a[i][j]);
			
		}
		for(i=0;i<r; i++){
			for(j=0; j<c; j++){
				if(a[i][j]=='#')
				k++;
			}
		}
		for(i=0;i<r; i++){
			for(j=0; j<c-1; j++){
				
				if(a[i][j]=='#'&&a[i][j+1]=='#'&&a[i][j+1]==a[i][j])
					k--;
			}
		}
		for(i=0;i<c; i++){
			for(j=0; j<r-1; j++){
				
				if(a[j][i]=='#'&&a[j+1][i]=='#'&&a[j+1][i]==a[j][i])
					k--;
			}
		}
		printf("%d",k);
			
}
