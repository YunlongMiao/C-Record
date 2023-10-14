#include<stdio.h>
int main()
{
	int n,i,k=1,m,sum=0,f=1;
	scanf("%d%d",&n,&m);
	for(; n<=m; n++){
		if(n>=1&&n<5){
			if(n==2||n==3)
				k=1;
			else k=0;
		}
		if(n>=5){
			if(n%2==0)
				k=0;
			else
				for(i=3; i<n; i+=2){
					if(n%i==0)
						k=0;
					//else k=1;
				}
		}
		if(k==1)
	//	sum+=n;
		printf("%d %d\n",n,f++);
	}
//	printf("%d",sum);
}
