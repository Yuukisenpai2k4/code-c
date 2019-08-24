#include<stdio.h> 

int main(){
	float a, b; // khai bao 2 bien a,b kieu float
	scanf("%f %f", &a, &b); // Nhap vao 2 gia tri a,b tu ban phim
	float temp = a; // khai bao 1 bien temp va gan gia tri bang gia tri bien a
	a = b; // 
	b = temp; //
	printf("a=%f b=%f", a, b);
	return 0;
	 
	
}

/*
a=1
b=3
tmp = a; tmp = 1
a = b; a=3, b=3
b = tmp; b = 1
*/
