#include <stdio.h>

int main(){
	int n, s = 0;
	
	printf("Nhap vao mot so nguyen n = ");
	scanf("%d", &n);
	
	printf("\nTong cac so %d = ", n);
	
	while(n > 0){
		int tam = n % 10;
		n = n / 10;
		s = s + tam;
	}
	printf("%d", s);
	
	return 0;
}