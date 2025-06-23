#include<stdio.h>

void main(){

	int a = 2,b=3;
	while (b!=0){
		int carry = a&b;
		a=a^b;
		b = carry<<1;
	}

	printf("%d",a);
}