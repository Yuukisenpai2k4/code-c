#include<stdio.h>

int main(){
	int a, b, sum=1;
	printf("Input the number of terms:");
	scanf("%d", &b);
	for(a=1; a<=b; a++)
	{
		printf("%d", 2 * a);
		sum += 2 * a;
	}
	printf("%d\n", b);
}
