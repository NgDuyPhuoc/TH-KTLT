//tìm giá tr? l?n nh?t trong mãng 2 chi?u, cho bi?t v? trí hàng và c?t trong mãng?
#include <stdio.h>

void nhap(int a[][205], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][205], int m, int n) {
	printf("\nMang vua nhap la:\n");

	for(int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void tongDuongCheo(int a[][205], int m, int n) {
	int sum = 0;
	for(int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if(i == j){
				sum += a[i][j];
			}
		}
		
	}
	printf("Tong duong cheo cua ma tran la: %d", sum);
}

int main() {
	int m, n;
	do {
		printf("Nhap so hang: ");
		scanf("%d", &m);
		printf("Nhap so cot: ");
		scanf("%d", &n);
		if(m != n) {
			printf("Vui long nhap lai ma tran vuong!\n\n");
		}
	} while(m != n);

	int a[205][205];


	nhap(a, m, n);
	xuat(a,m,n);
	tongDuongCheo(a, m, n);

	return 0;
}
