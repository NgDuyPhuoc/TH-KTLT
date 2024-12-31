#include <stdio.h>
#include <math.h>

long tongS(int x, int n){
	long sum = 0;
	
	for(int i = 0; i <= n; i++){
		sum += pow(x, 2 * i + 1);
	}
	return sum;
}

int main() {
	int x, n;

	printf("Nhap vao 1 so nguyen x = ");
	scanf("%d", &x);
	printf("Nhap vao 1 so mu n = ");
	scanf("%d", &n);
	
	printf("Tong S = %d", tongS(x, n));
	
	return 0;
}