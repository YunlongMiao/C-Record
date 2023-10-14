#include<stdio.h>
int main()
{




short * pas[10];

short a[10]= {1,2,3,4,5};

short b[5]={4,4,4};

short c[3] = {5,7,5};

pas[0] = a;
pas[1] = b;
pas[2] = c;

printf("%d",pas[0][2]);

	
}
