#include <stdio.h>//khai bao thu vien 
 int main() // khoi tao ham main 
 {
    char char1 = 'X';//khai bao bien X kieu char
    char char2 = 'M';//khai bao bien M kieu char
    char char3 = 'L';// khai bao bien L kieu char

	printf("The reverse of %c%c%c is %c%c%c\n", // in ra ky tu nguoc lai 
		char1, char2, char3,
		char3, char2, char1);

	return(0);//tra ve gia tri ban dau
}
