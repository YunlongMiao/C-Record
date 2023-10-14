#include<stdio.h>
int main()
{
	int a,b,c,i,n,t,m,u,x[100],y[100];
	scanf("%d%d",&n,&b);
	for(a=0;a<n;a++)
	{
		scanf("%d",&i);
		x[a]=i;
	}
	for(c=0;c<n;c++)
	{
		y[c]=x[c];
		if(x[c]>b)
		{
			t=x[c];
			x[c]=b;
			y[c]=x[c];
			y[c+1]=t;
			m=c;
		for(m=c;m<n-m;m++)
		   {
		   	y[m+1]=
		   }
			
		}
		//	y[c]=x[c];
	//	for(u=m;u<n-m;u++)
		 {
		 	
		 }
	}
}
