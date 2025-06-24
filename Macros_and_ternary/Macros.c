/* Write a program calculate area of a rectangle by creating a constant definition(object like Macros) 
as nummder or text */


#include<stdio.h>
#include<stdlib.h>
#define length 4
#define breadth 3
#define name "hello world!!!!"
#define calculate_area(a,b) (a*b);

void main(){
	printf("\nMACROS: \n\nlength = %d and breadth = %d",length,breadth);
	int area = length*breadth;
	printf("\nArea of the rectangle is: %d\n\n",area);


	//using MACRO function
	area = calculate_area(length,breadth);
	printf("\nArea of the rectangle is: %d\n\n",area);


	//string Macro
	printf("Name is %s\n\n",name);

	exit(0);
}