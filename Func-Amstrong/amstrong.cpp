#include <stdio.h>

int findAmstrong(int n){
	int n_temp = n, temp, sum = 0;
	
	while(n_temp > 0) {
		temp = n_temp % 10;
		sum += (temp*temp*temp);
		n_temp /= 10;
	}
	if(sum == n) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int n;
	
	printf("\n***KIEM TRA SO AMSTRONG***\n\n");
	printf("Nhap vao mot so nguyen (n co 3 chu so) n = ");
	scanf("%d", &n);

	if(findAmstrong(n)){
		printf("%d la so Amstrong", n);
	} else{
		printf("%d khong phai la so Amstrong", n);
	}
		
	printf("\n\n=================================================\n");
	
	printf("\n***IN CAC SO AMSTRONG***\n\n");
	
	printf("Cac so Amstrong co 3 chu so:\n");
	for(int i = 100; i <= 999; i++){
		if(findAmstrong(i)){
			printf("%d ", i);
		}
	}

	return 0;
}