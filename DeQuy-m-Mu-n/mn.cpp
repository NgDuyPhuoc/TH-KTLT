//viết chương trình tính m mũ n, với m và n là số nguyên nhập từ bàn phím(sử dụng đệ quy)

#include <stdio.h>

int hamMu(int m, int n){
	if(n == 1){
		return m;
	} else{
		return m * hamMu(m, n - 1);
	}
}

int main(){
	int m, n;
	
	printf("Nhap vao so nguyen m = ");
	scanf("%d", &m);
	printf("Nhap vao so mu n = ");
	scanf("%d", &n);
	
	printf("%d^%d = %d", m, n, hamMu(m, n));
	
	return 0;
}