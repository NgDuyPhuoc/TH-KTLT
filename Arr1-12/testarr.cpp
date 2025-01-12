#include <stdio.h>

void nhapMang(int a[100], int &n) {
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n) {
	printf("\nMang vua nhap:");

	for(int i = 0; i < n; i++) {
		printf("\na[%d] = %d", i, a[i]);
	}
}

void tongMang(int a[], int n) {
	int sum = 0;

	for(int i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("\n\nTong cac phan tu cua mang: %d", sum);
}

void tichKhac0(int a[], int n) {
	int tkk = 0;

	for(int i = 0; i < n; i++) {
		if(a[i] != 0) {
			tkk *= a[i];
		}
	}

	printf("\nTich cac phan tu khac 0 cua mang: %d", skk);
}

void demPhanTuAm(int a[], int n) {
	int dem = 0;

	for(int i = 0; i < n; i++) {
		if(a[i] < 0) {
			dem++;
		}
	}
	printf("\nSo phan tu am cua mang: %d", dem);
}

void ptuChia2Va3(int a[], int n) {
	int dem = 0;

	for(int i = 0; i < n; i++) {
		if(a[i] % 2 == 0 && a[i] % 3 == 0) {
			dem++;
		}
	}
	printf("\nSo phan tu chia het cho 2 va 3: %d", dem);
}

int main() {
	int n;
	int a[100];

	nhapMang(a, n);
	xuatMang(a, n);
	tongMang(a, n);
	tongKhac0(a, n);
	demPhanTuAm(a, n);
	ptuChia2Va3(a, n);

	return 0;
}