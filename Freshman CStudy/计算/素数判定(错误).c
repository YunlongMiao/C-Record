#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	int n,t,j;
	double num;
	int judge(double n);
	while(~scanf("%d%d",&x,&y)&&(x||y)){
		t=1;
		for(j=x;j<=y;j++){
			num=pow(j,2.0)+j+41;
			if(judge(num)==0)
			t=0;
		}
		if(t==0){
			printf("Sorry") ;
		}
		else if(t==1)
			printf("Ok");
		
	}
}
int judge(double n){
	int k,i;
		for(i=2; i<sqrt(n); i++){
			if((int)n%i==0)
			{
				return 0;
			}
		}
			return 1;
}
