#include <stdio.h>

int luyThua(int x, int n){
	int lt = 1;
	
	for(int i = 1; i <= n; i++){
		lt *= x;
	}
	return lt;
}

int main(){
	int x, n;
	
	printf("Nhap vao 1 so nguyen x = ");
	scanf("%d", &x);
	printf("Nhap vao 1 so mu n = ");
	scanf("%d", &n);
	
	printf("%d^%d = %d", x, n, luyThua(x, n));
	
	return 0;
}