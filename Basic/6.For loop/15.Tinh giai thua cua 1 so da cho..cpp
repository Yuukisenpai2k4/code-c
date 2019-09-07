#include<stdio.h>

int main(){
	int a, b=1, c;
	printf("Input the number:");
	scanf("%d", &c);
	for(a=1; a<=c; a++)
	{
		b=b*a;
	}
	printf("%d", b);
}
