#include <stdio.h>

void nhap(int &n){
	printf("Nhap vao so Amstrong (co 3 chu so): ");
	scanf("%d", &n);
}

void findAmstrong(int n){
	 int n_temp = n, temp, sum = 0;
	 
	 while(n_temp > 0){
	 	temp = n_temp % 10;
	 	sum += (temp * temp * temp);
	 	n_temp /= 10;
	 }
	 
	 if(sum == n){
	 	printf("\n%d la so Amstrong", n);
	 } else {
	 	printf("\n%d khong phai la so Amstrong", n);
	 }
	 
}

int main(){
	int n;
	
	nhap(n);
	findAmstrong(n);
	
	return 0;
}