#include<stdio.h>//khai bao thu vien stdio.h

int main(){//khoi tao ham main
	float a, b;//khai bao 2 bien a, b kieu int
	printf("Input the fist number:");
	scanf("%f", &a);
	printf("Input the second number:");
	scanf("%f", &b);
	if((a == 0)&&(b == 0)){
		printf("phuong trinh vo so nghiem");
	}
	else if((a == 0)&&(b != 0)){
		printf("phuong trinh vo nghiem");
	}
	else{
		printf("phuong trinh co nghiem la: %f", -b/a);
	}
	return 0;
}
