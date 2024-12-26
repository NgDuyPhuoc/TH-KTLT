#include <stdio.h>

int main(){
	float n;
	
	printf("Nhap vao so nguyen n = ");
	scanf("%f", &n);
	
	float s = 0;
	
	for(int i = 1; i <= n; i++){
		s = s + (1.0 / i);
	}
	
	printf("Ket qua = %.2f", s);
	
	return 0;
}