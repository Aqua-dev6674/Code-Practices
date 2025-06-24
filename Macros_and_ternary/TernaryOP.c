//Ternary operation : (condition? True stmts : False stmts)

#include<stdio.h>
#define Max(x,y) ((x>=y)?x:y)

int main(){

	int a, b;
	scanf("%d%d",&a,&b);

	printf("Maximum number is: %d",Max(a,b));
}