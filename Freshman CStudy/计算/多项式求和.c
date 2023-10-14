#include<stdio.h>
int main()
{
	int n,m;
	
	scanf("%d",&n);
	while(scanf("%d",&m)!=EOF&&n--) {
		judge(m);
	}
}

int judge(temp){
	int i,t;
	float sum;
	for(i=1,t=1,sum=0; i<=temp; i++,t++){
		if(t%2==0)
			sum-=1.0/i;
		else
			sum+=1.0/i;
	}
	printf("%.2f\n",sum);
}
