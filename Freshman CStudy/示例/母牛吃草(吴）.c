#include <stdio.h>

int main() {
	char a[100][100];
	int n, m;
	int i, j, k = 0;
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n - 1; i++)
		for (j = 0; j <= m; j++) {
			scanf("%c", &a[i][j]);
		}
	for (i = 0; i < n; i++)
		for (j = 0; j <= m; j++) {
			if (a[i][j] == '#' && a[i + 1][j] == '#') {
				k++;
				a[i + 1][j] = '.';
			} else if (a[i][j] == '#' && a[i][j + 1] == '#') {
				k++;
				a[i][j + 1] = '.';
			} else if (a[i][j] == '#') {
				k++;
			}
		}
	printf("%d", k );
	return 0;
}
