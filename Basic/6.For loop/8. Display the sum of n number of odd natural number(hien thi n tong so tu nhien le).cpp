#include<stdio.h>

int main(){
	int a, b, sum=0;
	printf("Input the number:");
	scanf("%d", &a);
	printf("The odd numbers are:\n");
	for(b=1; b<=a; b++)
	{
		printf("%d\n", 2*b-1);
		sum+=2*b-1;
	}
	printf("\nThe sum of odd Natural Number upto %d terms :%d \n,", &a, sum);
	return 0;
}
