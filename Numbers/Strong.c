#include<stdio.h>


int main(){
	int sum = 0 , num,rem,fact,temp;


	scanf("%d",&num);
	temp = num;

	while(num){
		rem = num %10;
		fact = 1;
		for(int i =1; i<=rem;i++){
			fact*=i;
		}

		sum+=fact;
		num /= 10;

	}

	if(temp == sum){
 		printf("\n%d is a Strong number\n",temp);
 	}
 	else{
 		printf("\n%d is not a Strong number\n",temp);
 	}
 	return 0;

	return 0;
}