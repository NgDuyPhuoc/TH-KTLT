#include <stdio.h>

void nhapArr(int (*A)[205], int (*B)[205], int *m, int *n) {
	printf("\nKich thuoc ma tran A, B:\n");
	printf("Nhap vao so dong: ");
	scanf("%d", m);
	printf("Nhap vao so cot: ");
	scanf("%d", n);

	printf("\nMa tran A:\n");
	for (int i = 0; i < *m; i++) {
		for (int j = 0; j < *n; j++) {
			printf("A[%d %d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	printf("\nMa tran B:\n");
	for (int i = 0; i < *m; i++) {
		for (int j = 0; j < *n; j++) {
			printf("B[%d %d] = ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
}

void xuatArr(int (*A)[205], int (*B)[205], int m, int n) {
	printf("\n============================================\n");
	printf("\nGia tri cua mang vua nhap la:\n");

	printf("Ma tran A:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("\nMa tran B:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	printf("\n============================================\n");
}

void maxMinArr(int (*A)[205], int (*B)[205], int m, int n) {
	int maxA = A[0][0], minA = A[0][0];
	int maxB = B[0][0], minB = B[0][0];
	int dongMaxA = 0, cotMaxA = 0, dongMinA = 0, cotMinA = 0;
	int dongMaxB = 0, cotMaxB = 0, dongMinB = 0, cotMinB = 0;

//min, max A
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (A[i][j] > maxA) {
				maxA = A[i][j];
				dongMaxA = i;
				cotMaxA = j;
			}
			if (A[i][j] < minA) {
				minA = A[i][j];
				dongMinA = i;
				cotMinA = j;
			}
		}
	}

//min,max B
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (B[i][j] > maxB) {
				maxB = B[i][j];
				dongMaxB = i;
				cotMaxB = j;
			}
			if (B[i][j] < minB) {
				minB = B[i][j];
				dongMinB = i;
				cotMinB = j;
			}
		}
	}

	printf("\nGia tri lon nhat cua mang A: %d", maxA);
	printf("\nVi tri: Dong %d, Cot %d", dongMaxA + 1, cotMaxA + 1);

	printf("\nGia tri nho nhat cua mang A: %d", minA);
	printf("\nVi tri: Dong %d, Cot %d", dongMinA + 1, cotMinA + 1);

	printf("\nGia tri lon nhat cua mang B: %d", maxB);
	printf("\nVi tri: Dong %d, Cot %d", dongMaxB + 1, cotMaxB + 1);

	printf("\nGia tri nho nhat cua mang B: %d", minB);
	printf("\nVi tri: Dong %d, Cot %d", dongMinB + 1, cotMinB + 1);

	printf("\n============================================\n");
}

void sumMaTran(int (*A)[205], int (*B)[205], int m, int n) {
	printf("\nTong cua A va B:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int chon, m, n;
	int A[205][205], B[205][205];

	do {
		printf("\nVui long chon 1 trong 4 menu:\n");
		printf("*****MENU TINH TOAN*****\n");
		printf("1. Nhap mang A, B.\n");
		printf("2. Hien thi 2 mang A, B vua nhap.\n");
		printf("3. Xac dinh gia tri lon nhat, nho nhat.\n");
		printf("4. Tinh tong 2 ma tran A, B.\n");
		printf("5. Thoat.\n");
		printf("-> Toi chon menu: ");
		scanf("%d", &chon);

		switch (chon) {
			case 1:
				nhapArr(A, B, &m, &n);
				break;
			case 2:
				nhapArr(A, B, &m, &n);
				xuatArr(A, B, m, n);
				break;
			case 3:
				nhapArr(A, B, &m, &n);
				maxMinArr(A, B, m, n);
				break;
			case 4:
				nhapArr(A, B, &m, &n);
				sumMaTran(A, B, m, n);
				break;
			case 5:
				nhapArr(A, B, &m, &n);
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("\nVui long nhap lai! Yeu cau khong hop le.\n");
		}
	} while (chon != 5);

	return 0;
}
