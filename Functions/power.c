#include<stdio.h>

int power(int base,int exponent){

	int result = 1;

	for(int i=0;i<exponent;i++){
		result*=base;
	}
	return result;
}

int power_result(){
	int a,b;
	printf("Enter base and Exponent: \n");
	scanf("%d%d",&a,&b);
	return power(a,b);
}


int main(){
	
	int result = power_result();

	printf("Result: %d \n",result);

}