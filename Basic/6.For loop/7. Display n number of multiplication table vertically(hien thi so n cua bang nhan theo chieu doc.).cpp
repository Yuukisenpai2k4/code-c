#include<stdio.h>

int main(){
	int a, b, c;
	printf("Input the number of multiplication tables:");
	scanf("%d", &a);
	printf("Multiplication table from 1 to %d\n", &a);
	for(b=1; b<=10; b++)
	{
		for(c=1; c<=a; c++)
	printf("Table to caculation:%d * %d = %d\n", b, c);
}
	return 0;
}
