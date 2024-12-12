#include <stdio.h>

void thongTinKH(char ten_kh[], char dia_chi[], char sdt[]) {
	printf("Ho va ten: ");
	gets(ten_kh);
	printf("Dia chi: ");
	gets(dia_chi);
	printf("So dien thoai: ");
	gets(sdt);
	printf("\n=================================================\n\n");
}

void thongTinHH(char ten_hh[], float *so_luong, float *don_gia) {
	printf("Ten hang hoa: ");
	gets(ten_hh);
	printf("So luong hang hoa: ");
	scanf("%f", so_luong);
	printf("Don gia: ");
	scanf("%f", don_gia);
	printf("\n=================================================\n\n");
}

float tinhTien(float so_luong, float don_gia){
	float thanh_tien = 0;
	
	thanh_tien = so_luong * don_gia;
	
	printf("\n=================================================\n\n");
	
	return thanh_tien;

}

float tienGiam(float so_luong, float don_gia){
	float save;
	if(so_luong > 20){
		return 0.1 * tinhTien(so_luong, don_gia);
	} else if(so_luong > 10){
		return 0.05 * tinhTien(so_luong, don_gia);
	} else if(so_luong > 5){
		return 0.02 * tinhTien(so_luong, don_gia);
	}
	
	printf("\n=================================================\n\n");
	return 0;
}

float tongCong(float thanh_tien, float save){
	return (*thanh_tien) - (*save);
}

int main() {
	char ten_kh[50], dia_chi[50], sdt[10], ten_hh[50];
	float so_luong, don_gia, thanh_tien, save;
	
	thongTinKH(ten_kh, dia_chi, sdt);
	thongTinHH(ten_hh, &so_luong, &don_gia);
	float tinhtien = tinhTien(so_luong, don_gia);
	float tiengiam = tienGiam(so_luong, don_gia);
	float thanhtien = tongCong(&thanh_tien, &save);
	
	printf("Thong tin khach hang: %s\n", ten_kh);
	printf("Thong tin hang hoa: %s\n", ten_hh);
	printf("Tinh tien: %f\n", tinhtien);
	printf("So tien giam: %f\n", tiengiam);
	printf("Thanh tien: %f\n", thanhtien);
                                   
	return 0;
}