#include<stdio.h>

int main(){
	int a,ctr;
	printf("Input number of terms: ");
	scanf("%d", &ctr);
	for(a = 1; a <= ctr; a++)
	{
		printf("Number is %d and cube of the %d is:%d\n", a, a, (a*a*a));
		
	}
	return 0; 
}
