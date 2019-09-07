#include<stdio.h>//khai bao thu vien stdio.h

int main(){//khoi tao ham main.
	int a;//khai bao 1 bien a kieu int
	float b;//khai bao 1 bien b kieu float
	printf("tong khaong cach dau vao tinh bang km:");//in.....
	scanf("%d", &a);//gan gia tri scanf bang gia tri a nhap tu ban phim
	printf("tong nhien lieu dau vao tinh bang lit:");//in ...
	scanf("%f", &b);//gan gia tri scanf bang gia tri b nhap tu ban phim
	printf("Muc tieu thu trung binh (km/lit) %.3f", a/b);// in.........
	printf("\n");
	
	return 0;//tra ve gia tri ham main
	
}
