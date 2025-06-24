#include<stdio.h>

int main(){

	int balance = 5000,user_pin,pin = 1234,withdraw;


	printf("\nPlease Enter your Pin number: ");
	scanf("%d",&user_pin);


	if (pin == user_pin){

		printf("\n\nWelcome THOTA SATISH BABU,\nYou have %d in your account",balance);
		printf("\n\nEnter the amount you want to withdraw: ");
		scanf("%d",&withdraw);
		if (balance >= withdraw && withdraw > 0){
			balance  = balance - withdraw;
			printf("\n\nTransaction Successful");
			printf("\nRemaining balance: %d",balance);
		}
		else{
			printf("\nInsufficient balance");
			printf("\nYou have %d in your account",balance);
		}
	}
	else{
		printf("\n\nInvalid Pin\n");
	}

}