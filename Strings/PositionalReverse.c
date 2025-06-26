#include<stdio.h>
#include<string.h>


int main(){

	char str[30];
	int i=0,start,end,j;
	// char rev[30];
	// int i=0,j=0,k;

	// gets(str);

	scanf("%[^\n]",str);

	// while(str[i]!='\0'){
	// 	if(str[i] == ' ' || str[i] == '\0'){
	// 		k=i;
	// 		i--;
	// 		while(i>=0){
	// 			rev[j++] = str[i--];
	// 		}
	// 		rev[j++] = ' ';
	// 		i=k;
	// 	}
	// 	i++;
	// }
	// rev[j] = '\0';

	// printf("%s",rev);


	while(str[i] != '\0'){
		while(str[i] == ' '){
			printf(" ");
			i++;
		}

		start = i;
		while(str[i] != ' ' && str[i]!=0){
			i++;
		}

		end = i-1;

		for(j=end;j>=start;j--){
			printf("%c",str[j]);
		}
	}

}