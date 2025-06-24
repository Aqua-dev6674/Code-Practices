#include<stdio.h>

void main(){
	int a,b;
	scanf("%d%d",&a,&b);

	
	//swap using *,/
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\na:%d and b:%d",a,b);
}