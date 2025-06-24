#include<stdio.h>

int main(){

	int n=10,k=5,m;
	scanf("%d",&m);

	if (m <= (n-k) && m > 0){
		n=n-m;
		printf("\nNUMBER OF CANDIES SOLD: %d",m);
		printf("\nNUMBER OF CANDIES LEFT: %d",n);
	}
	else{
		printf("\nINVALID INPUT");
		printf("\nNUMBER OF CANDIES LEFT: %d",n);
	}
	return 0;
}