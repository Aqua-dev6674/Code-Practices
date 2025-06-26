// Input Reading inside the Function

#include<stdio.h>

void number(){

	int num;
	printf("Enter a number: \n");
	scanf("%d",&num);
	printf("You Have Entered %d \n",num);
	
}

int main(){

	number();
	return 0;
}