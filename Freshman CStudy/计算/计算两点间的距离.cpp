#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,l;
	while(~scanf("%f %f %f %f", &x1,&y1,&x2,&y2))
	{
		l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		printf("%.2f\n", l);
	}
	return 0;
}

