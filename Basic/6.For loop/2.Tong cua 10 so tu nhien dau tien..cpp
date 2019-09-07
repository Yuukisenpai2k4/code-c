#include<stdio.h>

int main(){
	int a, tong = 0;
	printf("10 so nguyen dau tien la:");
	for (a = 1; a<=10; a++)
	{
		tong = tong + a;
		printf("%d", a);
	}
	printf(" tong = %d\n", tong);				
	return 0;
	
}
