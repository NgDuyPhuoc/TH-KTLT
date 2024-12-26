#include <stdio.h>
#include <string.h>

void xuatStrlen() {
	char nhap[100];
	printf("Nhap gia tri cua chuoi: ");
	gets(nhap);
	printf("Chieu dai chuoi: %d\n", strlen(nhap));
	printf("================================\n");
}

void copyStr() {
	char copy[100], nhap[100];
	printf("Nhap chuoi can sao chep: ");
	gets(nhap);
	strcpy(copy, nhap);
	printf("Chuoi sau khi copy: %s\n", copy);
	printf("================================\n");
}

void noiStr() {
	char str1[100], str2[100];
	printf("Nhap chuoi thu nhat: ");
	gets(str1);
	printf("Nhap chuoi thu hai: ");
	gets(str2);
	strcat(str1, str2);
	printf("Ket qua sau khi noi 2 chuoi: %s\n", str1);
	printf("================================\n");
}

void ssanhStr() {
	char ss1[100], ss2[100];
	printf("Nhap chuoi thu nhat: ");
	gets(ss1);
	printf("Nhap chuoi thu hai: ");
	gets(ss2);
	int s = strcmp(ss1, ss2);
	if (s == 0) {
		printf("2 chuoi vua nhap bang nhau\n");
	} else {
		printf("2 chuoi vua nhap khong bang nhau\n");
	}
	printf("================================\n");
}

void daonguocStr() {
	char dnguoc[100];
	printf("Nhap chuoi ban muon dao nguoc: ");
	gets(dnguoc);
	strrev(dnguoc);
	printf("Chuoi sau khi dao nguoc: %s\n", dnguoc);
	printf("================================\n");
}

void kituthuong() {
	char kitu[100];
	printf("Nhap chuoi ki tu viet hoa: ");
	gets(kitu);
	strlwr(kitu);
	printf("Chuoi sau khi chuyen sang chu thuong: %s\n", kitu);
	printf("================================\n");
}

void kituhoa() {
	char kitu[100];
	printf("Nhap chuoi ki tu viet thuong: ");
	gets(kitu);
	strupr(kitu);
	printf("Chuoi sau khi chuyen sang chu hoa: %s\n", kitu);
	printf("================================\n");
}

int main() {
	int choice;
	do {
		printf("====== MENU ======\n");
		printf("1. Tinh chieu dai chuoi\n");
		printf("2. Sao chep chuoi\n");
		printf("3. Noi chuoi\n");
		printf("4. So sanh chuoi\n");
		printf("5. Dao nguoc chuoi\n");
		printf("6. Chuyen chuoi sang chu thuong\n");
		printf("7. Chuyen chuoi sang chu hoa\n");
		printf("0. Thoat\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		getchar();

		switch (choice) {
			case 1:
				xuatStrlen();
				break;
			case 2:
				copyStr();
				break;
			case 3:
				noiStr();
				break;
			case 4:
				ssanhStr();
				break;
			case 5:
				daonguocStr();
				break;
			case 6:
				kituthuong();
				break;
			case 7:
				kituhoa();
				break;
			case 0:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Lua chon khong hop le. Vui long chon lai.\n");
		}
	} while (choice > 7);

	return 0;
}