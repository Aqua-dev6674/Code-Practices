#include<stdio.h>

int main(){

	int a=10;
	int *p;
	p = &a;

	printf("Value: %d \n",a);
	printf("Address: %d \n",&a);
	printf("Value of P: %p \n",p);
	printf("Address value of p: %p \n",*p);


	return 0;
}