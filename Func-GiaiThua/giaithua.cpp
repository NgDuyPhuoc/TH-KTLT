#include <stdio.h>

int giaiThua(int n){
	int gt = 1;
	
	for(int i = 1; i <= n; i++){
		gt *= i;
	}
	return gt;
}

int main(){
	int n;
	
	printf("Nhap vao 1 so nguyen n = ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, giaiThua(n));
	
	return 0;
}