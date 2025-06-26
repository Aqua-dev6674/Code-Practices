#include<stdio.h>

int calc(int num){
	printf("Square of %d is %d \n",num,num*num);
	return num*num;
}

int input(){
	int x;
	printf("Enter the value: \n");
	scanf("%d",&x);
	return calc(x);
	
}

int main(){
	printf("Square in main function is %d \n",input());
	
	return 0;
}