#include<stdio.h>
#include<string.h>
#include<math.h>
#define NUM 10000
int main()
{
	long long int n,num[NUM],yushu[NUM],sum;
	int i;
	int r;
	

	while(~scanf("%lld%d", &n,&r))
	{
		for(i=1,num[0]=n; num[i-1]!=0; i++)//�ֱ�õ�ת����ĸ�λ���� ������������ 
 		{
 			yushu[i-1]=num[i-1]%r;
 			num[i]=num[i-1]/r;
 		}
 		
 		for(i=0,sum=0; i<strlen(yushu); i++)	//�ֱ���� 
 		{
 			sum+=pow(r,i);
 		}
 		printf("%lld\n",sum);
	}

}
