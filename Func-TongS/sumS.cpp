#include <stdio.h>

int TongS(int n){
	int sum;
	
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	int n;
	
	printf("Nhap mot so nguyen n = ");
	scanf("%d", &n);
	
	printf("Tong cac so tu 1 den %d: %d", n, TongS(n));
	
	return 0;
}