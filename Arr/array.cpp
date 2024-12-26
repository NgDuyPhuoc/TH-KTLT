#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nSo phan tu vua nhap vao mang la:\n");
	
	for(int i = 0; i < n; i++){
		printf("%d\t", a[i]);
	}
	
return 0;
}