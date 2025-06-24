#include<stdio.h>

int main(){

	char chr;

	printf("\nEnter a character:\n");
	scanf(" %c",&chr);

	if ((chr < 'Z' || chr < 'z') && (chr > 'A') || chr > 'a' ){

		if( chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U' || chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
		{
			printf("\nGiven character is Vowel\n");
		}
		else{
			printf("\nGiven character is Consonant\n");
		}

	}

	else{

		printf("\nGiven character is not an Alphabet\n");
	}

	return 0;
}