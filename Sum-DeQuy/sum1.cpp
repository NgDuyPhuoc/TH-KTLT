#include <stdio.h>

float sum(int n){
	if(n == 1){
		return 1;
	}else {
		return 1 / n + sum(n - 1);
	}
}

int main(){
	int n;
	
	printf("Nhap n = ");
	scanf("%d", &n);
	
	printf("S = %.2f", sum(n));
	
	return 0;
}