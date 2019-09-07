#include<stdio.h>

int main(){
	int a, b;
	printf("Input the number:");
	scanf("%d", &b);
	for(a = 1; a <= 10; a++)
	{
		printf("Table to calculation:%d * %d = %d\n", a, b, a*b);
	}
	return 0;
}
