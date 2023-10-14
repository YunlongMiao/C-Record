#include<stdio.h>
int main()
{
	int j=0,i=0,k=0,n,c;int temp=0;int b[10];
	while(1)
	{	
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}	
		int a[n];
		for(k=0;k<n;k++)
		{
			scanf("%d",&a[k]);
		}
		temp=a[i];
		for(i=0;i<n-1;i++)
		{
//			temp=a[i];
			if(temp>=a[i+1])
			{
				temp=a[i+1];
				c=i+1;	
			}
//			b[i]=temp;
//			a[0]=temp;
		}
		a[c]=a[0];
		a[0]=temp;
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
	}	
}

















































