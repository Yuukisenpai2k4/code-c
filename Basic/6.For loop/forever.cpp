#include<stdio.h>

main(){
	int count = 0;
	while(count < 100)
	{
		printf("\n");
		count += 10;
		printf("\t%d", count);
		count -= 10;
		printf("\t%d", count);
		printf("\\n");
	}
}
