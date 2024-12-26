#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap vao so nguyen n = ");
	scanf("%d", &n);
	
	int gt = 1;
	
	for(int i = 1; i <= n; i++){
		gt = gt * i;
	}
	
	printf("\n%d! = %d", n, gt);
	
	return 0;
}