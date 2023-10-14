#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int n,m,i,j;
	while(~scanf("%d %d",&n,&m))
	{
		int temp=0;
		int count=0;
		int arr[900]={0};
		for(i=n;i<=m;i++)
		{
			int sum=0;
			int i0=i;
			for(j=0;j<3;j++)
			{
				temp=i0%10;
				sum+=pow(temp,3);
				i0=i0/10;
			}
			if(sum==i) 
			{
				arr[count++]=i;	
			}
		}
		if(count==0) printf("no");
		else {
			for( i=0;i<count-1;i++)
			{
				printf("%d ",arr[i]);
			}
			printf("%d\n",arr[count-1]);
		}
		getchar();
	}
	return 0;
}


