#include<stdio.h>//khai bao thu vien stdio.

main(){//khoi tao ham main
	int num;//khai bao 1 bien kieu int
	printf("The even numbers from 1 to 25 are: \n\n");
	for (num=2; num<=25; num += 2)
		printf("%d\n", num);
	return 0;
}
