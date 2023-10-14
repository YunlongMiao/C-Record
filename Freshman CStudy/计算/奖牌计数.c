#include <stdio.h>
//#include <math.h>

int main() 
{
	int i = 0;
	int n = 0;
    int x = 0, z = 0,r = 0; //分别为金银铜计数 
	int j,y,t,sum=0;
	

		scanf("%d", &n);
		while(n)
		{
			scanf("%d%d%c%d", &j, &y,& &t);
			x+=j;
			z+=y;
			r+=t;
			n--;
		}
			sum=x+z+r;
	
		printf("%d %d %d %d",x,z,r,sum);
		
}
