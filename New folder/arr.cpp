#include <stdio.h>

void nhapArr(int a[], int &n){
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuatArr(int a[], int n){
	printf("\nMang vua nhap la: ");
	for(int i = 0; i <  n; i++){
		printf("%d  ", a[i]);
	}
}

int findMaxArr(int a[], int n){
	int max = a[0];
	
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

int findMinArr(int a[], int n){
	int min = a[0];
	
	for(int i = 1; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	return min;
}

void sapXepTang(int a[], int n){
	int temp = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nSap xep mang theo thu tu tang dan: ");
	for(int i = 0; i < n; i++){
		printf("%d  ", a[i]);
	}
}

void sapXepGiam(int a[], int n){
	int temp = 0;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nSap xep mang theo thu tu giam dan: ");
	for(int i = 0; i < n; i++){
		printf("%d  ", a[i]);
	}
}

int findMaxAm(int a[], int n){
	int max_am = -1;
	for(int i = 0; i < n; i++){
		if(a[i] < 0 && a[i] > max_am){
			max_am = a[i];
		}
	}
	return max_am;
}

int main(){
	int a[100], n;
	
	nhapArr(a, n);
	xuatArr(a, n);
	printf("\nGia tri lon nhat cua mang la: %d", findMaxArr(a, n));
	printf("\nGia tri nho nhat cua mang la: %d", findMinArr(a, n));
	sapXepTang(a, n);
	sapXepGiam(a, n);
	printf("\nGia tri am lon nhat trong mang la: %d", findMaxAm(a, n));
	
	return 0;
}