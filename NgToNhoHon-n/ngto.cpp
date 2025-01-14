#include <stdio.h>

void nhap(int &n){
	printf("Nhap vao so phan tu n: ");
	scanf("%d", &n);
}

void xuatNgTo(int n){
	for(int i = 2; i < n; i++){
		int ngto = 1;
		for(int j = 2; j * j <= i; j++){
			if(i % j == 0){
				ngto = 0;
				break;
			}
		}
		if(ngto){
			printf("%d ", i);
		}
	}
}

int main(){
	int n;
	
	nhap(n);
	xuatNgTo(n);
	
	return 0;
}