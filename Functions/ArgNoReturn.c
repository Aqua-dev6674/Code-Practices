//Argument Passing without Return Value

#include<stdio.h>


void number(int num){

	printf("Double of %d is %d \n",num,num*2);
	
}

int main(){

	int num;
	printf("Enter a number: \n");
	scanf("%d",&num);
	number(num);
	return 0;
}