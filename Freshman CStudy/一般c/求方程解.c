#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, m, n;
	printf("�밴˳�����뷽��ax*x+bx+c=0��abc��ֵ���Զ��Ÿ�������\n");
	scanf("%f,%f,%f", &a, &b, &c);


	if (a == 0 && b != 0) {
		m = n = -c / b;
		printf("�÷��̽���һ��ʵ������m=%f", m);
	} else if (b * b - 4 * a * c < 0 || a == 0 && b == 0) {
		printf("�÷�����ʵ����");
	} else if (b * b - 4 * a * c == 0) {
		m = n = -b / (2 * a);
		printf("�÷����������ʵ����m=%f,n=%f", m, n);
	} else {
		m = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		n = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("�÷��������������ʵ������m=%f,n=%f", m, n);
	}
	return 0;
}