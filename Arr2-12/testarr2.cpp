#include <stdio.h>

void nhapMang(int a[], int &n) {
	do {
		printf("Nhap so phan tu cua mang: ");
		scanf("%d", &n);

		if(n < 0) {
			printf("\nVui long nhap n > 0!\n");
		}

	} while(n < 0);

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

void mangTangDan(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;
			}
		}
		int tam = a[i];
		a[i] = a[min];
		a[min] = tam;
	}

	printf("\n\nMang theo thu tu tang dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void mangGiamDan(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		int max = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j] > a[max]) {
				max = j;
			}
		}
		int tam = a[i];
		a[i] = a[max];
		a[max] = tam;
	}

	printf("\n\nMang theo thu tu giam dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void soDuongTang(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		if(a[i] > 0) {
			int min = i;
			for(int j = i + 1; j < n; j++) {
				if(a[j] < a[min]) {
					min = j;
				}
			}
			int tam = a[i];
			a[i] = a[min];
			a[min] = tam;
		}
	}

	printf("\n\nSo duong theo thu tu tang dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void soAmGiam(int a[], int n) {
	for(int i = 0; i < n - 1; i++) {
		if(a[i] < 0) {
			int max = i;
			for(int j = i + 1; j < n; j++) {
				if(a[j] > a[max]) {
					max = j;
				}
			}
			int tam = a[i];
			a[i] = a[max];
			a[max] = tam;
		}
	}

	printf("\n\nSo am theo thu tu giam dan:\n");

	for(int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void findNT(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % i != 0 && a[i] % a[i] == 0){
			printf("%d", a[i]);
		}
	}
}

int main() {
	int a[100];
	int n;

	nhapMang(a, n);
	xuatMang(a, n);
	mangTangDan(a, n);
	mangGiamDan(a, n);
	soDuongTang(a, n);
	soAmGiam(a, n);
	findNT(a, n);

	return 0;

}