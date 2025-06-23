#include<stdio.h>

void main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	
	//cyclic swap a,b,c in clockwise
	printf("\nClock Wise:");
	printf("\nBefore Swap -> a: %d , b: %d ,c: %d",a,b,c);
	a=a+b+c;
	b = a-b-c;
	c = a-b-c;
	a = a-b-c;

	printf("\nAfter Swap -> a: %d , b: %d ,c: %d",a,b,c);

	//cyclic swap a,b,c in anti - clockwise
	printf("\n\nAnti-Clockwise:");
	printf("\nBefore Swap -> a: %d , b: %d ,c: %d",a,b,c);
	a=a+b+c;
	c = a-b-c;
	b = a-b-c;
	a = a-b-c;

	printf("\nAfter Swap -> a: %d , b: %d ,c: %d\n\n",a,b,c);
}