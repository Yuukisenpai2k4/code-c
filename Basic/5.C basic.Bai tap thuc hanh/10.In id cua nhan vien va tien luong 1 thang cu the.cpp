#include<stdio.h>//khai bao thu vien stdio.h

int main(){//khoi tao ham main
	char id [10];//toi da 10 ky tu
	int hour;//khai bao bien hour keu int
	double value, salary;//khai bao 2 bien kieu double
	printf("Input the Employees ID(Max 10 char)");//in ra.....
	scanf("%s", &id);//gan gia tri scanf bang gia tri id
	printf("Input the working hour:");//in ra ................
	scanf("%d", &hour);//gan gia tri scanf bang gia tri hour nhap tu ban phim
	printf("salary amount/hr:");
	scanf ("%lf", &value);//gan gia tri scsnf bang gia tri value nhap tu ban phim
	salary = value * hour;//gan gia tri slary bang gia tri value*hour 
	printf("Employees ID = %s\salary = U$ %.2lf\n", id, salary);
	return 0;
}
