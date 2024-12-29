#include <stdio.h>

float MAX(float a, float b, float c){
	float max;
	if(a > b && a > c){
		max = a;
	}else if(b > a && b > c){
		max = b;
	} else {
		max = c;
	}
	
	return max;
}

int main() {
	float a, b, c;

	printf("Nhap vao cac so thuc (a, b, c):\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	float max = MAX(a, b, c);
	
	printf("So lon nhat trong 3 chu so la: %.2f", max);

	return 0;
}