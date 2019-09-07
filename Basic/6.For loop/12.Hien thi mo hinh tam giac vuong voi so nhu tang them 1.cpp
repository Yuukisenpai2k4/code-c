#include<stdio.h>

int main(){
	int a, b=0, c;
	printf("Input number of rows:");
	scanf("%d", &c);
	for(a=1; a<=c; a++)
	{
		printf("Vong %d: b=%d\n",a, b);
		for(b=0; b<a; b++)
			printf("%d",a+b);
		printf("\n");
	}
}
