#include<stdio.h>
int main()
{
	int t = 0, l = 0, r = 0,i=0,k=0;

	scanf_s("%d", &t);
	while (t) {
		int a[4] = { 2,3,5,7 };
		scanf_s("%d%d", &l, &r);
		for (; l <= r; l++) {
			if (l == 1)
				l = 1;
			else if (l == 2)
				k++;
			else if(l>2)
				for (i = 2; i < l; i++) {
					if (l % i == 0)
						break;
					else if(i==l-1)
						k++;
						
					
					
				}
		}
		t--;
		printf("%5d", t);
	}
	return 0;
}
