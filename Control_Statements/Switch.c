#include<stdio.h>

int main(){
	int day;

	printf("\nEnter the number (1-7) for day:");
	scanf("%d",&day);


	switch(day){
		case 1: 
			printf("\nMonday\n");
			break;

		case 2:
			printf("\nTuesday\n");
			break;

		case 3:
			printf("\nWednesday");
			break;

		case 4:
			printf("\nThursday\n");
			break;

		case 5:
			printf("\nFriday");
			break;


		case 6:
			printf("\nSaturday\n");
			break;

		case 7:
			printf("\nSunday\n");
			break;

		default:
			printf("\nInvalid day\n");
	}

	
	return 0;
}