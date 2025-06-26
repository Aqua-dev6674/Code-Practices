//Argument Passing with Return Value

#include<stdio.h>

int add(int a, int b){
	return a+b;
}


int main(){
	int x,y;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);

	int result = add(x,y);
	printf("Sum : %d \n",result);
	printf("Sum : %d \n",add(x,y)); // direct calling and printing
	return 0;
}	