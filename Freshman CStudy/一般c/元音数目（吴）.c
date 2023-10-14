#include <stdio.h>

int main() {
	int n;
	int m = 0;
	int sum[20][5];
	scanf("%d", &n);//n代表行数
	getchar();//用getchar吸收数组
	for (int t = 0; t < n; t++, m++) { //进入循环
		char c = 0; //定义一个数组，每次进入这个循环，c会被清零
		int a = 0, e = 0, i = 0, o = 0, u = 0; //j代表数字个数

		while (c != '\n') { //遇到回车，代表已经输出一行，会跳出循环，计算出j的值
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
