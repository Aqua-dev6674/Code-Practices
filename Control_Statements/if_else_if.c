#include<stdio.h>

int main(){

	int num;
	printf("\nEnter a number:");
	scanf("%d",&num);


	if (num > 0){
		printf("\nThe number is Positive");
	}
	else if(num < 0){
		printf("\nThe number is Negative");
	}
	else{
		printf("\nThe number is Zero");
	}

	return 0;
}