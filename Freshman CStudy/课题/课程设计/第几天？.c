#include <stdio.h>
int main(int argc, char *argv[])
{
	int YYYY,MM,DD;
	int i;
	while(~scanf(" %d/%d/%d",&YYYY,&MM,&DD))
	{
		int sum;
		int arr[12][2]={
		{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}
	};
		if(YYYY%4==0) arr[1][1]=29;
		for(i=0;i<MM-1;i++)
		{
			sum=sum+arr[MM][1];
		}
		sum=sum+DD;
		printf("%d\n",sum);
	}
	return 0;
}

