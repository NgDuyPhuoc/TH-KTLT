#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap vao so nguyen n = ");
	scanf("%d", &n);
	
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
	
	return 0;
}