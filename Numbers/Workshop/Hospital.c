#include<stdio.h>

int main(){

	int choice,patient = 0,age,disease_code;
	float total_bill,estimated_bill;


	do{
		printf("\n ------Hospital Menu------\n");
		printf("1. Add Patient\n");
		printf("2. View Total Bill\n");
		printf("3. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				patient++;
				printf("\nEnter the patient age: ");
				scanf("%d",&age);
				printf("Enter the patient disease type: ");

				printf("\n1. Fever\n");
				printf("2. Infection\n");
				printf("3. Surgery\n");
				printf("\nEnter the patient disease code: ");
				scanf("%d",&disease_code);

				printf("\nEnter estimated bill:");
				scanf("%f",&estimated_bill);

				switch(disease_code){
					case 1:
						printf("This is Fever\n");
						break;
					case 2:
						printf("This is Infection\n");
						break;
					case 3:
						printf("This is Surgery\n");
						break;

					default:
						printf("Invalid Code, Enter between (1-3)!!\n");
				}

				total_bill += estimated_bill;

				printf("Patient added successfully\n");

				break;

			case 2:
				printf("\nTotal patients: %d",patient);

				printf("\nTotal bill of the hospital is Rs.%.2f /-",total_bill);

				break;

			case 3:
				printf("Exiting System, Thank you!!!");
				break;

			default:
				printf("Invalid Choice, Try again!!");

		}
	} while(choice != 3);

	return 0;
}