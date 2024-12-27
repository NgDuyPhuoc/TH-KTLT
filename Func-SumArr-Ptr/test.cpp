#include <stdio.h>

int tinhSum(int *n) {
	int sum = 0;
	int *ptr;
	
	int a[*n];
	for(int i = 0; i < *n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	ptr = &a[0];

	for(int i = 0; i < *n; i++) {
		sum += *ptr;
		*ptr++;
	}
	
	return sum;
}

int main() {
	int n;

	printf("Nhap vao so phan tu: ");
	scanf("%d", &n);

	int a[100];
	
	printf("Ket qua: %d", tinhSum(&n));

	return 0;
}