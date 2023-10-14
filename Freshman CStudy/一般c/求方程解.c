#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, m, n;
	printf("请按顺序输入方程ax*x+bx+c=0中abc的值（以逗号隔开）：\n");
	scanf("%f,%f,%f", &a, &b, &c);


	if (a == 0 && b != 0) {
		m = n = -c / b;
		printf("该方程仅有一个实数跟：m=%f", m);
	} else if (b * b - 4 * a * c < 0 || a == 0 && b == 0) {
		printf("该方程无实数根");
	} else if (b * b - 4 * a * c == 0) {
		m = n = -b / (2 * a);
		printf("该方程有两相等实跟：m=%f,n=%f", m, n);
	} else {
		m = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		n = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("该方程有两个不相等实数根：m=%f,n=%f", m, n);
	}
	return 0;
}