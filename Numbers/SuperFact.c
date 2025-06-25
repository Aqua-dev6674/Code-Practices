#include<stdio.h>

int main(){

	int num,superFact=1;

	scanf("%d",&num);

	for(int i = 1; i<=num;i++){
		int fact = 1;
		for(int j = 1;j<=i;j++){
			fact *= j;
		}

		superFact *= fact;
	}

	printf("\nSuper Factorial of the %d is %d\n",num,superFact);

	return 0;
}