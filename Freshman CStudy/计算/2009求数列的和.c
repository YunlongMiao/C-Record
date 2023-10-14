#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	float res,temp;
	int i;
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=1,temp=n,res=n;i<m; i++){
			res+=sqrt(temp);
			temp=sqrt(temp);
			if(i==m-1)
			printf("%.2f\n", res);
		}
	}
}
