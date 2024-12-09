#include <stdio.h>
#include <conio.h>

#define PTB1	1
#define PTB2	2
#define STOP	3

int main(){
	int i;
	
	do{
//		system("cls"); //xóa màn hình
		printf("Chuong trinh giai phuong trinh bac thap nhat \n");
		printf(" 1. Giai phuong trinh bac 1: ax + b = 0 \n");
		printf(" 2. Giai phuong trinh bac 2: ax^2 + bx + c = 0 \n");
		printf(" 3. Thoat chuong trinh \n\n");
		printf(" chon muc so (1/2/3) ?");
		scanf("%d", &i);
		if(i == PTB1)
			printf("Giai phuong trinh bac 1: hien chua co \n");
		else if(i == PTB2)
			printf("Giai phuong trinh bac 2: chua cai dat \n\n");
	}while(i != STOP);
	
	return 0;
}