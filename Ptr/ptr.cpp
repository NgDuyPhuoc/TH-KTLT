#include <stdio.h>

void tinhToan(int *x, int *y){
	*x = *x - 1;
	*y = *y + 1;
}

int main(){
	int a = 10;
	int b = 5;
	
	tinhToan(&a, &b);
	
	printf("Ket qua: %d, %d", a, b);
	
	return 0;
}