#include<stdio.h>

int main(){
	int a;
	int b;
	scanf("%d", &a, &b);
	int tong, hieu, tich, thuong;
	tong = a+b;
	hieu = a-b;
	tich = a*b;
	thuong = a/b;
	
	printf("\nTong %d+%d=%d", a, b, tong);
	printf("\nHieu %d-%d=%d", a, b, hieu);
	printf("\nTich %d*%d=%d", a, b, tich);
	printf("\nThuong %d/%d=%d", a, b, thuong);
	return 0;
	
	
}
	

