// Viet chuong trinh nhap vao 1 day so n luu vao mang n phan tu va in no ra man hinh
#include<stdio.h>

int main(){
	int a[5];
	int i;
	for(i=0; i<=4; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++)
	{
		printf("%d\n", a[i]);
	}
}

