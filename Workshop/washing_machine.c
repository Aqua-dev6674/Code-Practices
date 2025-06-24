#include<stdio.h>


int main(){
	int weight;

	scanf("%d",&weight);

	if (weight < 0){
		printf("\nINVALID INPUT");
	}
	else if (weight > 7000){
		printf("\nOVERLOADED");
	}
	else if(weight == 0){
		printf("\nTime Estimated: 0 minutes");
	}
	else if(weight < 2000 && weight > 0 ){
		printf("\nTime Estimated: 25 minutes");
	}
	else if(weight > 2000 && weight < 4000 ){
		printf("\nTime Estimated: 35 minutes");
	}
	else if(weight > 4000 && weight < 7000 ){
		printf("\nTime Estimated: 45 minutes");
	}

	return 0;
}