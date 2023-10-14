#include<stdio.h>
int main()
{
	int n a[2002]={0};
	while(1)
	{
		int x, i,t
		scanf("%d", &n);
		
		if(n==0)
		break;
		
		for(i=1; i<=n; i++)
		{
			scanf("%d", &x)
			a[i]=x;
		}
			t1=a[n];		//¼ÇÂ¼ a¡¾n¡¿µÄÖµ 
		for(i=1; i<n; i++)
		{
			a[i+1]=a[i]/2+a[i+1]/2;
		
			
		}
	}
}
