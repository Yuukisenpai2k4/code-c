#include<stdio.h>//khaibao thu vien stdio.h
#include<stdlib.h>//khai bao thu vien dtdlib.h

int main(){//khoi tao ham main
	int x, y, z, result, max;//khai bao 4 bien kieu int
	printf("nhap gia tri dau tien:");
	scanf("%d", &x);//gan gia tri scanf bang gia tri a nhap tu ban phim 
	printf("nhap gia tri thu hai:");
	scanf("%d", &y);//gan gia tri scanf bang gia tri b nhap tu ban phim
	printf ("nhap gia tri thu ba:");
	scanf("%d", &z);//gan gia tri scanf bang gia tri c nhap tu ban phim
	result = (x+y+abs(x-y))/2;//gan gia tri result bang gia tri ..........
	max = (result + z +abs(result - z));//gan gia tri max bang gia tri......
	printf("gia tri toi da cua ba so nguyen: %d", max);//in ra ....
	return 0;// tra ve gia gia tri ham main
}



	
