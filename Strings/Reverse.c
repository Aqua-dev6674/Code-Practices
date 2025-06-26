#include<stdio.h>


int main(){

	char str[30];
	char rev[20];
	int i=0;
	int k=0;

	scanf("%s",str);

	while(str[i]!='\0'){
		i++;
	}
	i--;
	while(i>=0){
		rev[k++] = str[i--];
	}
	rev[k] = '\0';

	printf("Reverse word is %s\n",rev);
}