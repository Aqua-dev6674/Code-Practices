// No Argument Passing with Return Value

#include<stdio.h>

int satish(){
	int num;
	scanf("%d",&num);
	return num;
}

int main(){

	int num = satish();
	printf("Your value stored in function is %d \n",num);

	return 0;
}