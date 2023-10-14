#include<stdio.h>
int main()
{
	int AH,AM,AS,BH,BM,BS,N;
	int sum1,sum2,sum3;
	while(~scanf("%d",&N))
	{
		
		while(N--) 
		{
			scanf("%d%d%d%d%d%d",&AH,&AM,&AS,&BH,&BM,&BS);

			sum1=AH+BH;
			sum2=AM+BM;
			if(sum2>=60)
			{
				sum1++;
				sum2-=60;
			}
			sum3=AS+BS;
			if(sum3>=60)
			{
				sum2++;
				sum3-=60;
			}
			printf("%d %d %d\n",sum1,sum2,sum3);
		}
	}
}
