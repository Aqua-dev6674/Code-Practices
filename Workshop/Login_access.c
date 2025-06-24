//Login System with Parameter access 

#include<stdio.h>
#include<string.h>

int main(){
	char username[10], password[10];

	printf("\nEnter the username:");
	scanf("%s",username);

	printf("\nEnter the password:");
	scanf("%s",password);

	if (!strcmp(username,"satish")){
		if(!strcmp(password, "Test@123")){
			printf("\n\nHello!! %s",username);
		}
		else{
			printf("\nIncorrect password");
		}
	}
	else{
		printf("\nIncorrect Username");
	}
	return 0;
}