#include <stdio.h>

int a, b;

void nhapDuLieu(){
	printf("Nhap vao 2 so a va b:\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
}

int tinhTong(){
	int s = a + b;
	printf("\nTong cua 2 so a va b:");
	printf("\n%d + %d = %d\n", a, b, s);
	return s;
}

int tinhHieu(){
	int h = a - b;
	printf("\nHieu cua 2 so a va b:");
	printf("\n%d - %d = %d\n", a, b, h);
	return h;
}

int tinhTich(){
	int t = a * b;
	printf("\nTich cua 2 so a va b:");
	printf("\n%d x %d = %d\n", a, b, t);
	return t;
}

int tinhThuong(){
	int th = a / b;
	if(a != 0){
		printf("\nThuong cua 2 so a va b:");
		printf("\n%d : %d = %d\n", a, b, th);
	}else{
		printf("\nKhong the thuc hien phep toan chia!\n");
	}
	return th;
}

int main(){
	nhapDuLieu();
	tinhTong();
	tinhHieu();
	tinhTich();
	tinhThuong();
}