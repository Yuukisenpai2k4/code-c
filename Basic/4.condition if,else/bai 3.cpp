#include<stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a > b && a> c ) {
		printf(" a la gia tri lon nhat");
	}
	if(b > a && b > c) {
		printf(" b la gia tri lon nhat");
	}
	if(c > a && c > b) {
		printf(" c la gia tri lon nhat"); 
	}	
	if(a == b && a ==c ){
	 	printf("khong co gia tri nao lon nhat");
	}
	return 0;
}
