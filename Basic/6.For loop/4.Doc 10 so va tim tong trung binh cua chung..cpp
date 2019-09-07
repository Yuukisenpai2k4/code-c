#include<stdio.h>

int main(){
	int a, n, sum = 0;
	float avg;
	printf("Nhap vao 10 so:");
	for(a = 1; a <= 10; a++)
	{
		printf("%d", a);
		scanf("%d", &n);
		sum+=n;	
	}
	avg = sum/10.0;
	printf("tong cua 10 khong la:%d\n trung binh la: %f\n",sum , avg);
	return 0;
}

