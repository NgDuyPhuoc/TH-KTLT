#include <stdio.h>

long long giaiThua(int n){
	if(n == 0){
		return 1;
	} else {
		return n * giaiThua(n - 1);
	}
}

int main(){
	int n;
	
	printf("Giai thua cua: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, giaiThua(n));
	
	return 0;
}