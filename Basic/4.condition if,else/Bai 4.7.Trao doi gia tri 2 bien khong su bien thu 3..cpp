#include<stdio.h>

int main(){
	int a, b;// khai bao hai bien a, b
	scanf("%d %d", &a, &b);//nhap vao 2 gia tri a, b, tu ban phim
	int tong = a + b;//khai bao 1 bien tong= a + b
	a = tong - a;// khai bao....
	b = tong - b;
	printf("%d %d", a, b);
	return 0;
	
}
