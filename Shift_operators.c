#include<stdio.h>

void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int c= a>>b;
	printf("\n%d >> %d :%d",a,b,c);
	c = a << b;
	printf("\n%d << %d :%d",a,b,c);
}