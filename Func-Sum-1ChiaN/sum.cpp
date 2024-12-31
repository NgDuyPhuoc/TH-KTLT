#include <stdio.h>

float tongS(int n){
	float sum = 0;
	
	for(int i = 1; i <= n; i++){
		sum += 1.0 / i;
	}
	return sum;
}
int main(){
	int n;
	
	printf("Nhap vao 1 so nguyen n = ");
	scanf("%d", &n);
	
	printf("Tong S = %.2f", tongS(n));
	
	return 0;
}