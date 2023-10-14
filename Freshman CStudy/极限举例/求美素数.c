#include <stdio.h>
//#include <math.h>

int main() 
{
	float i = 0;
	int n = 0;
    int x = 0, y = 0,t = 0;  
	float k=0;
	int a[10000];

		scanf("%d", &n);
	
		while(n)
		{
			scanf("%d%d", &x, &y);
			for(;x<=y;x++)
			{
				if(x==1)
				t++;
				else
				for(i=2.0,t=1,k=0;i<x;i++)
				{
				//	if(x%i==0)
				//	break;
					k=x/(i*1.0);
					if(k-(int)k==0)
					continue;	
				//	if(i==x-1)
					t++;
					
				} 
			}printf("%d\n",t);
				n--;
		}
		
	
		
}
