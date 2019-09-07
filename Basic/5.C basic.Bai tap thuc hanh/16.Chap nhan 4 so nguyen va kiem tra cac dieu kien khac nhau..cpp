#include<stdio.h>//khai bao thu vioen stdio.h

int main(){//khoi tao ham main
	int a, b, c, d;//khai bao 4 bien kieu int
	printf("Nhap so nguyen dau tien:");
	scanf("%d", &a);//gan gia tri scanf bang gia tri a nhap tu ban phim
	printf("Nhap so nguyen thu hai:");
	scanf("%d", &b);//gan gia tri scanf bang gia tri b 
	printf("Nhap so nguyen thu ba:");
	scanf("%d", &c);
	printf("nhap so nguyen thu tu:");
	scanf("%d", &d);
	if((b>c) &&(d>a))
	return 0;
}
