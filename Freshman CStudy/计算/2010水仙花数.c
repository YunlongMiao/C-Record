#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	float res,temp;
	int i,t,x;
	int num,arr[100]={0};
	int JUDGE(int num);
	while(scanf("%d%d",&n,&m)!=EOF){
		for(i=n,t=0; i<=m; i++){
			x=JUDGE(i);
			if(x==1){
				t++;
				arr[t]=i;
				
			}
		}
		
		if(t==0)
		printf("no");
		else{
		
			for( i=1; i<t; i++){
			
				printf("%d",arr[i]);
			//	if(i!=t-1)
				printf(" ");
			//	if(i=t)
			//	printf("\n");
			}
			printf("%d\n",arr[t]);
		}
		t=0;
	}
}
int JUDGE(int num){
	int k;
	int on,tw,th;
	on=num%10;
	tw=(num/10)%10;
	th=num/100;
	if(on*on*on+tw*tw*tw+th*th*th==num)
		k=1;
	else
		k=0;
	return (k);
	
}
