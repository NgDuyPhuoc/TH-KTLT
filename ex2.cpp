#include <stdio.h>

#define CONG	1
#define TRU		2
#define NHAN	3
#define CHIA	4
#define THOAT	5

int main(){
	int a, b, n;
	
	printf("Nhap vao so a = ");
	scanf("%d", &a);
	printf("Nhap vao so b = ");
	scanf("%d", &b);
	
	printf("Ban muon thuc hien phep tinh nao? ");
	scanf("%d", &n);
	
	do{
		if(n == CONG){
			printf(" 1. Thuc hien phep tinh cong: %d + %d = %d", a, b, a + b);
			break;
		}
		else if (n == TRU){
			printf(" 2. Thuc hien phep tinh tru: %d - %d = %d", a, b, a - b);
			break;
		}
		else if (n == NHAN){
			printf(" 3. Thuc hien phep tinh nhan: %d x %d = %d", a, b, a * b);
			break;
		}
		else if (n == CHIA){
			printf(" 1. Thuc hien phep tinh chia: %d : %d = %d", a, b, a / b);
			break;
		}
		else if (n == THOAT){
			printf("Thoat chuong trinh");
			break;
		}
	}while(n != THOAT);
}