#include<stdio.h>
#define PEO 100

int main()
{
	float fra[PEO];
	int n;
	float sum,aver;
	int i,j;
	int max,min,t;//temp
	while(~scanf("%d", &n)){
		for(i=0; i<n; i++){
			scanf("%f", &fra[i]);
		}
		for(i=1,min=fra[0],t=0; i<n; i++){//15-20 找出最小数，并归零
			if(min>fra[i]){
				min=fra[i];
				t=i;
			}
		}
		fra[t]=0;
		for(i=1,max=fra[0],t=0; i<n; i++){//22-28 找出最大数，并归零 
			if(max<fra[i]){
				max=fra[i];
				t=i;
			}
		}
		fra[t]=0;
		
		for(i=0,sum=0; i<n; i++){
			sum+=fra[i];
//			printf("%f ",fra[i]);
		}
		aver=sum/(n-2);
		printf("%.2f\n", aver);
	}
}

