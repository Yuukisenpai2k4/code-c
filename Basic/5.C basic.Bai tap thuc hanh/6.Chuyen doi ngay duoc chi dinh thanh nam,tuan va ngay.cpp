#include<stdio.h>//khai bao thu vien stdio.h

int main(){//khoi tao ham main
	int days, years, week;//khai bao 3 bien kieu main
	
	days = 1239;//gan gia tri day bang b=gia tri  1239 nhap tu ban phim
	years = days/365;//gan gia tri years bang gia tri 365
	years = (days % 365)/7;
	days = days- ((years*365) + (weeks*7));//gan gia tri days bang gia tri............
	printf("Years:%d\n" years);//in ra.................
	printf("Weeks: &d\n", weeks)////in ra.................
	printf("Days;%d\n", days)////in ra.................
	return 0;//tra ve gia tri ham main
}
