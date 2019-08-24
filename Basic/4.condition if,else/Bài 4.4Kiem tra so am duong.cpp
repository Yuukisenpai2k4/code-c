#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a<0){
		printf("a la so am\n");
	}
	else if (a>0){ 
		printf("a la so duong\n");
	}
	else if(a==0){ 
 		printf("a khong la so am hay duong\n");
		
	}
	return 0;
	
}
