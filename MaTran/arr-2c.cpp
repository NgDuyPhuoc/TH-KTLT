#include <stdio.h>

int main() {
	int m, n;

	printf("Nhap so dong: ");
	scanf("%d", &m);
	printf("Nhap so cot: ");
	scanf("%d", &n);

	int a[m][n];

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nMang vua nhap la:\n");

	for(int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}