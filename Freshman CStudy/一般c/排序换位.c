/*#include<stdio.h>
int main()
{
    int n,f=0,c=0;
    while(scanf("%d",&n)!=EOF&&n)
	{
		int a=0, b[100]={0},x;
		for(; a<n;a++)
		{
			int x;
			scanf("%d",&x);
			b[a]= x;
			
		}
			int min=b[0],k=0,d=0;
		for(c=0;c<n-1;c++)
		{
			if(min>b[c+1])
			{
		    	min=b[c+1];
			    d=c+1;
			}
			
		}
		k=0;
		k=min;
		min=b[0];
		b[0]=k;
		b[d]=min;
	
		for(f=0;f<n;f++)
		{
			printf("%d",b[f]);
				if(f!=n)
				printf(" ");
		}
		printf("\n");
	}
		//printf("\n");





}
*/
#include <stdio.h>

int main() {
	int n, m, i, j,b,a,k;
	int arr[40];
	while (scanf("%d%d", &n, & m ) != EOF) {
		if (m == 0 && n == 0)
			break;
		else {

			for ( b = 0; b < n; b++) {
				scanf("%d", &arr[b]);
			}
			if (n == 0 && m != 0)
				printf("%d\n", m);
			else {
				for ( a = 0; arr[a] <= m+1; a++) {
					j = a;
				}
			}
		}
		for (k = 0; k < n+1; k++) {
			if (k < j) {
				printf("%d", arr[k]);
				if (k != n - 1)
					printf(" ");
			}
			if (k >= j) {
				if (k == j) {
					printf("%d %d", arr[k], m);
					if (k != n - 1)
						printf(" ");
				} else {
					printf("%d", arr[k]);
					if (k != n - 1)
						printf(" ");
				}
			}

		}
		if ((m != 0 && n != 0) || (n == 0 && m != 0) || (m == 0 && n != 0)) {
			printf("\n");
		} else
			printf("");
	}
	return 0;
}
