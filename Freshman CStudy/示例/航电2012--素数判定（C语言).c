#include<stdio.h>
#include<math.h>
int run(int x,int y)
{
	double j;
	int i;
 	for( j=x;j<=y;j++)
 	{
  		double m=pow(j,2.0)+j+41;
  		for( i=2;i<sqrt(m);i++)
  		{
   			if((int)m%i==0)
   			return 0;
  		}
 	}
 	return 1;
 } 
int main()
{
 	int x,y,n;
 	while(~scanf("%d %d",&x,&y))
 	{
  		if(x==y&&x==0)
  		return 0;
  		n=run(x,y);
  		if(n)
  		{
   			printf("OK\n");
  		}
  		else
  		{
   			printf("Sorry\n");
  		}
 	}
 	return 0;
}

