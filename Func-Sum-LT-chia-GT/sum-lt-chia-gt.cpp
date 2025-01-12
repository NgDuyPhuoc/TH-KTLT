#include <stdio.h>
#include <math.h>

int luyThua(int x, int n) {
	int lt = 1;

	for(int i = 1; i<= n; i++) {
		lt *= x;
	}
	return lt;
}

int giaiThua(int n) {
	int gt = 1;

	for(int i = 1; i <= n; i++) {
		gt *= i;
	}
	return gt;
}

float tinhToan(int x, int n) {
	float sum = 1;

	for(int i = 2; i <= n; i++) {
		int luythua = luyThua(x, i);
		int giaithua = giaiThua(i);
		
		sum +=(float)luythua / giaithua;
	}
	return sum;
}

int main() {
	int x, n;

	printf("Nhap vao 1 so nguyen x = ");
	scanf("%d", &x);
	printf("Nhap vao 1 so mu n = ");
	scanf("%d", &n);

	printf("Tong S(n) = %.2f\n", tinhToan(x, n));

	return 0;
}