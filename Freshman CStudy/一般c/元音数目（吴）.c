#include <stdio.h>

int main() {
	int n;
	int m = 0;
	int sum[20][5];
	scanf("%d", &n);//n��������
	getchar();//��getchar��������
	for (int t = 0; t < n; t++, m++) { //����ѭ��
		char c = 0; //����һ�����飬ÿ�ν������ѭ����c�ᱻ����
		int a = 0, e = 0, i = 0, o = 0, u = 0; //j�������ָ���

		while (c != '\n') { //�����س��������Ѿ����һ�У�������ѭ���������j��ֵ
			c = getchar();
			if (c == 'A' || c == 'a') {
				a++;
			}
			if (c == 'e' || c == 'E') {
				e++;
			}
			if (c == 'i' || c == 'I') {
				i++;
			}
			if (c == 'o' || c == 'O') {
				o++;
			}
			if (c == 'u' || c == 'U') {
				u++;
			}
		}
		sum[m][0] = a ;
		sum[m][1] = e ;
		sum[m][2] = i ;
		sum[m][3] = o ;
		sum[m][4] = u ;

	}
	for (int m = 0; m < n; m++) {

		printf("a=%d\n", sum[m][0]);
		printf("e=%d\n", sum[m][1]);
		printf("i=%d\n", sum[m][2]);
		printf("o=%d\n", sum[m][3]);
		printf("u=%d\n", sum[m][4]);
		printf("\n");

	}
	return 0;
}
