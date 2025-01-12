#include <stdio.h>

//Ham nhap
void nhapArr(int a[][100], int &m, int &n){
	printf("Nhap vao so dong: ");
	scanf("%d", &m);
	printf("Nhap vao so cot: ");
	scanf("%d", &n);
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

//Ham xuat
void xuatArr(int a[][100], int m, int n){
	printf("\nGia tri cua mang vua nhap la:\n");
	for(int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

double giaTriTBArr(int a[][100], int m, int n){
	int sum = 0, phantu = m * n;
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			sum += a[i][j];
		}
	}
	return (double)sum / phantu;
}

int main(){
	int m, n;
	int a[100][100];
	
	nhapArr(a, m, n);
	xuatArr(a, m, n);

	printf("\nGia tri trung binh cua cac phan tu 2 chieu: %.2f", giaTriTBArr(a, m, n));
	
	return 0;
}