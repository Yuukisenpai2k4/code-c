#include <stdio.h> //khai bao thu vien stdio.h
/* height and width of a rectangle in inches */
int width;//khai bao 1 bien width          
int height; // khai bao 1 bien height

int area; // khai bao 1 bien erea           
int perimeter; // khai bao 1 bien perimeter     

int add(int a, int b){
	int tong = a + b;
	return tong;
}

int main() {
	height = 7;//gan gia tri height bang gia tri 7
	width = 5; // gan gia tri width bang gia tri 5
	
	int c = add(height, width);
	
    perimeter = 2*(height + width);//gan gia tri perimeter bang gia tri 2*(height + width)
	printf("Perimeter of the rectangle = %d inches\n", perimeter);// in ra ...............
	
	area = height * width;// gan gia tri are=height * width
	printf("Area of the rectangle = %d square inches\n", area);// in ra..........................

    return(0);// tra ve gia tri cua ham main
}
