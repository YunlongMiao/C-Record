#include <stdio.h>
#include <math.h>

int main() 
{
	int i = 0;
	int n = 0;
    float x = 0, y = 0;
	int r = 0;
	float k = 0;
	float t = 0;

		scanf("%d", &n);
		while(n)
		{
			scanf("%f%f%d", &x, &y, &r);
			k = sqrt(x * x + y * y);
			
			t += k / 50 * 2 + r * 1.5;
			n--;
		}
			if (t - (int)t != 0)
   	 		{
				t++;
			}
	
		printf("%d\n",(int) t);
}
