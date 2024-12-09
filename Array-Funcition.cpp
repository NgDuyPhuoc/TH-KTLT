#include <stdio.h>
#define MAX 100

void nhapMang(int a[], int *n){
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", n);
	
	for(int i = 0; i < *n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void hienThiMang(int a[], int n){
	printf("Cac phan tu trong mang: ");
	for(int i = 0; i < n; i++){
		printf("%d", a[i]);
	}
}

void timGiaTriX(int a[], int n){
	int x, dem = 0;
	
	printf("Nhap gia tri x can tim: ");
	scanf("%d", &x);
	
	for(int i = 0; i < n; i++){
		if(a[i] == x)
			dem++;
	}
	printf("Gia tri x = %d xuat hien %d trong mang", x, dem);
}

void hienMinMaX(int a[], int n){
	int x;
	
	printf("Nhap vao gia tri x = ");
	scanf("%d", &x);
	
	printf("\nCac gia tri lon hon %d trong mang: ", x);
	
	for(int i = 0; i < n; i++){
		if(a[i] > x){
			printf("%d\t", a[i]);
		}
	}
	
	printf("\nCac gia tri nho hon %d trong mang: ", x);
	
	for(int i = 0; i < n; i++){
		if(a[i] < x){
			printf("%d\t", a[i]);
		}
	}
}

void tongChan(int a[], int n){
	int sum_chan = 0;
	
	for(int i = 0; i< n; i++){
		if(a[i] % 2 == 0){
			sum_chan = sum_chan + a[i];
		}
	}
	printf("\nTong cac so chan trong mang: %d", sum_chan);
}

void tongLe(int a[], int n){
	int sum_le = 0;
	
	for(int i = 0; i< n; i++){
		if(a[i] % 2 != 0){
			sum_le = sum_le + a[i];
		}
	}
	printf("\nTong cac so le trong mang: %d", sum_le);
}

void tongChiSoChan(int a[], int n){
	int CS_chan = 0;
	
	for(int i = 0; i< n; i++){
		if(i % 2 == 0){
			CS_chan = CS_chan + a[i];
		}
	}
	printf("\nTong cac chi so chan trong mang: %d", CS_chan);
}

void tongChiSoLe(int a[], int n){
	int CS_le = 0;
	
	for(int i = 0; i< n; i++){
		if(i % 2 != 0){
			CS_le = CS_le + a[i];
		}
	}
	printf("\nTong cac chi so le trong mang: %d", CS_le);
}

int main(){
	int n = 0, c, a[MAX	];
	
	printf("\n---MENU---\n");
	printf("-> 1. Nhap mang\n");
	printf("-> 2. Hien thi mang\n");
	printf("-> 3. Tim gia tri x nhap tu ban phim co trong mang\n");
	printf("-> 4. Hien thi cac gia tri nho hon va lon hon gia tri x nhap vao tu ban phim\n");
	printf("-> 5. Tong so chan trong mang\n");
	printf("-> 6. Tong so le trong mang\n");
	printf("-> 7. Tinh tong cac chi so chan trong mang\n");
	printf("-> 8. Tinh tong cac chi so le trong mang\n");
	printf("-> 9. Thoat\n");
	
	do{
		printf("\nBan muon thuc hien thuat toan thu may: ");
		scanf("%d", &c);
	
		if(c == 1){
			nhapMang(a, &n);
		} else if(c == 2){
			nhapMang(a, &n);
			hienThiMang(a, n);
			break;
		} else if(c == 3){
			nhapMang(a, &n);
			timGiaTriX(a, n);
			break;
		} else if(c == 4){
			nhapMang(a, &n);
			hienMinMaX(a, n);
			break;
		} else if(c == 5){
			nhapMang(a, &n);
			tongChan(a, n);
			break;
		} else if(c == 6){
			nhapMang(a, &n);
			tongLe(a, n);
			break;
		} else if(c == 7){
			nhapMang(a, &n);
			tongChiSoChan(a, n);
			break;
		} else if(c == 8){
			nhapMang(a, &n);
			tongChiSoLe(a, n);
			break;
		} else if(c == 9){
			printf("Thoat chuong trinh");
			break;
		} else {
			printf("Chuong trinh khong ton tai");
			break;
		}
	} while (c != 9);
	
return 0;
}