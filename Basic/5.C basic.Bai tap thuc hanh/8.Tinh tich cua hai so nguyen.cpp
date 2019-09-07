#include<stdio.h>//khai bao thu vien stdio.h

int main(){//khoi tao ham main
	int a, b, tich;//khai bao  bien kieu int
	printf("nhap gia tri dau tien");//in.......
	scanf("%d", &a);//gan gia tri scanf bang gia tri a nhap tu ban phim
	printf("nhap gia tri thu hai\n");//in.......
	scanf("%d", &b);//gan gia tri scanf bang gia tri b 
	tich = a*b;//gan gia tri tong bang gia tri a + b
	printf("tich cua hai so la:%d", tich);
	
	return 0;
}
