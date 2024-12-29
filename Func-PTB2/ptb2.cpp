#include <stdio.h>
#include <math.h>

void giaiPTB2(float a, float b, float c) {
	if(a == 0) {
		if(b == 0) {
			if(c == 0) {
				printf("Phuong trinh co vo so nghiem");
			} else {
				printf("Phuong trinh vo nghiem");
			}
		} else {
			printf("Phuong trinh co 1 nghiem x = %.2f", -c / b);
		}
	}
	
	float delta = b * b - 4 * a * c;
	
	if(delta > 0){
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet:\n x1 = %.2f\tx2 = %.2f", x1, x2);
	} else if(delta == 0){
		float x = -b / (2 * a);
		printf("Phuong trinh co nghiem kep:\nx = %.2f", x);
	} else{
		printf("Phuong trinh vo nghiem");
	}
}

int main() {
	float a, b, c;

	printf("Nhap vao cac he so (a, b, c):\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	giaiPTB2(a, b, c);

	return 0;
}