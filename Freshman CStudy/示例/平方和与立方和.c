#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m;
	while(~scanf("%d %d",&n,&m))
	{
		int temp;
		//记住一定要考虑符号交换顺序 
		if(n>m){
			temp=n;
			n=m;
			m=temp;
		}
		int sum1=0,sum2=0;
		for(int i=n;i<=m;i++)
		{
			if(i%2==1) sum1+=i*i*i;
			else sum2+=i*i;
		}
		printf("%d %d\n",sum2,sum1);
		getchar();
	}
	return 0;
}

