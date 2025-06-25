// Nivens is also called as Harshd number

#include<stdio.h>
 

 int main(){
 	int sum = 0 , num,x;

 	scanf("%d",&num);
 	x = num;
 	while(num){
 		sum = sum + (num%10);
 		num = num/10;
 	}
 	printf("\nSum of digits is: %d",sum);


 	if(x%sum == 0){
 		printf("\n%d is a Nivens number\n",x);
 	}
 	else{
 		printf("\n%d is not a Nivens number\n",x);
 	}
 	return 0;
 }