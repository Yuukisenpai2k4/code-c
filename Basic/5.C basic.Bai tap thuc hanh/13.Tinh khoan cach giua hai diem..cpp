#include<stdio.h>//khai bao thu vien stdio.h
#include<math.h>//khai bao thu vien math.h

int main(){//khoi tao ham main
	float a1, a2, b1, b2,  gdistance;//khai bao 5 bien kieu float
	printf("Input a1: ");//in.....
	scanf("%f", &a1);//gan gia tri scanf bang gia tri a1 nhap tu ban phim
	printf("input a2: ");//in....
	scanf("%f", &a2);//gan gia tri scanf bang gia tri a2 nhap tu ban phim
	printf("Input b1: ");//in ra..........
	scanf("%f", &b1);//gan gia tri scanf bang gia tri b1 nhap tu ban phim
	printf("Input b2: ");//in.........
	scanf("%f", &b2);//gan gia tri scanf bang gia tri b2 nhap tu ban phim
	gdistance = ((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1));//gan gia tri gdistance bang gia tri...........	
	printf("Distance between the said points: %.4f", sqrt(gdistance));
	return 0;//tra ve gia tri ham main
}
