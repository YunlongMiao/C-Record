#include <stdio.h>
#include <math.h>

int main() {
	float  s, t,  x = 0, y = 0, sum = 0; //x��y������룬s�������,
	//t����δȡ����ʱ��,j����time���±�
	float time[100];
	int n, m, i = 0, j = 0, p = 0, sum1 = 0; //n�����ݶ�����m����������i����ѭ������
	scanf("%d", &n);
	for (j = 0, i = 1; i <= n; i++, j++) {
		scanf("%f%f", &x, &y);
		scanf("%d", &m);
		s = sqrt(x * x + y * y);
		t = s * 2 / 50 + m + m * (0.5);
		time[j] = t;
		t = 0;
	}
	for (p = 0, sum = 0; p < n; p++) {
		sum = sum + time[p];
	}
	if (sum - (int)sum != 0) {
		sum++;
		sum1 = sum;
	} else
		sum1 = sum;
	printf("%d", sum1);
	return 0;
}
