#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	float ncv, dt;
	
	do{
		printf("Nhap vao chieu dai cua 3 canh:\n");
	
		printf("Canh a = ");
		scanf("%d", &a);
		printf("Canh b = ");
		scanf("%d", &b);
		printf("Canh c = ");
		scanf("%d", &c);
	
		printf("Chu vi cua tam giac la: %d\n", a + b + c);
	
		if(a + b > c && a + c > b && c + b > a){
		
			ncv = (float)(a + b + c) / 2;
			dt = sqrt(ncv * (ncv - a) * (ncv - b) * (ncv - c));
		
			printf("Dien tich cua tam giac la: %.2f\n", dt);
		}else{
			printf("\n--Vui long nhap lai!--\n");
		}
	}while(a + b < c || a + c < b || c + b < a);
	
return 0;
}