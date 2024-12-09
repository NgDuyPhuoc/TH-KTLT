#include <stdio.h>

int main(){
	int i, j, k, cuu_chuong = 0;
	
	for(k = 2; k < 10; k++){
		printf("-Cuu chuong %d-\t", k);
	}
	printf("\n\n");
	
	for(i = 1; i <= 10; i++){
		for(j = 2; j < 10; j++){
			cuu_chuong = j * i;
			printf("%d x %d = %d\t", j, i, cuu_chuong);
		}
		printf("\n");
	}
}