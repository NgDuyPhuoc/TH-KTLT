#include <stdio.h>

//Ham nhap mang
void nhapArr(int &n, int a[]) {
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

//Ham xuat mang
void xuatArr(int n, int a[]){
	printf("\nGia tri cua mang vua nhap la: ");
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
}

//Gia tri lon nhat
int giaTriMax(int n, int a[]){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

//Gia tri nho nhat
int giaTriMin(int n, int a[]){
	int min = a[0];
	for(int i = 0; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	return min;
}

//

int main() {
	int n;
	int a[100];
	
	nhapArr(n, a);
	xuatArr(n, a);
	printf("\nPhan tu lon nhat cua mang: %d", giaTriMax(n, a));
	printf("\nPhan tu nho nhat cua mang: %d", giaTriMin(n, a));

	return 0;
}