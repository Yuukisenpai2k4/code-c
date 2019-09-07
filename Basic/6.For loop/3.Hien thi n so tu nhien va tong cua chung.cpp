#include<stdio.h>

int main(){
	int a, n, tong =0;
	printf("Nhap vao gia tri n:\n");
	scanf("%d", &n);
	for(a=1; a<=n; a++)
	{
		tong = tong +a;
		printf("%d\n", a);
	}
	printf("tong = %d\n", tong);
	return 0;
}
