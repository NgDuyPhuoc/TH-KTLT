#include <stdio.h>

int sum(int n){
	if(n == 1){
		return 1;
	} else {
		return n * n + sum(n - 1);
	}
}

int main(){
	int n;
	
	printf("Nhap vao mot so nguyen n = ");
	scanf("%d", &n);
	
	printf("Tong cac so tu 1 den %d binh phuong bang: %d", n, sum(n));
	
	return 0;
}