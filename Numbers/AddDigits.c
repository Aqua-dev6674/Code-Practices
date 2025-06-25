#include<stdio.h>
 

 int main(){
 	int sum = 0 , num;

 	scanf("%d",&num);

 	while(num){
 		sum = sum + (num%10);
 		num = num/10;
 	}

 	printf("\nSum of digits is: %d",sum);

 	return 0;
 }