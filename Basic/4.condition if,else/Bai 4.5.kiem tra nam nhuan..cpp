#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a%4 == 0 && a%100 != 0){ 
		printf("a la nam nhuan");
	}
	else if(a%400 == 0){
		printf("a la nam nhuan");
	}
	else{
		printf("a khong la nam nhuan");
		
	}
	return 0;
}
