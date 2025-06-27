#include<stdio.h>
#include<string.h>



int main(){

	char words[20][20];
	char temp[20];

	for (int i=0;i<5;i++){
		printf("Enter word %d: \n",i+1);
		scanf("%s",words[i]);
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		if(strcmp(words[i],words[j]) < 0){

			int k =0;
			while(words[i][k] !='\0' || words[j][k] != '\0'){
				temp[k] = words[i][k];
				words[i][k]= words[j][k];
				words[j][k] = temp[k];
				k++;
			}
		}

	}
	printf("Sorted in Lexciographical order: \n");
	for(int i=0;i<5;i++){
		printf("%s \n",words[i]);
	}

	return 0;
}