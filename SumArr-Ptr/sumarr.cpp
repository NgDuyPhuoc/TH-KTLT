#include <stdio.h>

int main(){
	int n, sum = 0;
	
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	int a[n];
	
	int *ptr;
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	ptr = &a[0];
	
	for(int i = 0; i < n; i++){
		sum += *ptr;
		ptr++;
	}
	
	printf("Tong cua mang: %d", sum);
	
	return 0;
}