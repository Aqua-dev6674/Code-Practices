// Write a program to find the max and min of two numbers without using a condition or ternary operators also
// constraint : use arithmetic operators only 
// input : let a = 22 and b = -8
// output : max = 22 and min = -8

#include<stdio.h>
#include<stdlib.h>
void main(){
	int a,b;
	scanf("%d%d",&a,&b);

	//min and max 
	int max = ((a+b) + abs(a-b))/2;
	int min = ((a+b) - abs(a-b))/2;

	printf("\nmax : %d and min : %d",max,min);


	

	
}