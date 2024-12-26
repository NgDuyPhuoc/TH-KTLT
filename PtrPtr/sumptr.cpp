#include <stdio.h>

int tongPtr(int *x, int *y) {
	return *x + *y;
}

int hieuPtr(int *x, int *y) {
	return *x - *y;
}

int tichPtr(int *x, int *y) {
	return *x * *y;
}

int thuongPtr(int *x, int *y) {
	return *x / *y;
}

int main() {
	int a, b;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, tongPtr(&a, &b));
	printf("%d - %d = %d\n", a, b, hieuPtr(&a, &b));
	printf("%d x %d = %d\n", a, b, tichPtr(&a, &b));
	printf("%d : %d = %d\n", a, b, thuongPtr(&a, &b));

	return 0;
}