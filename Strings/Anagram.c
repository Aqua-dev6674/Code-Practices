#include<stdio.h>
#include<string.h>


int main(){

	char str1[50],str2[50],s1[50],s2[50],temp;
	int count1=0,count2=0;
	printf("Enter string 1:\n");
	gets(str1);
	printf("Enter string 2:\n");
	gets(str2);

	//removing Spaces and converting to Lower of str1

	for (int i=0;str1[i]!='\0';i++){
		if(str1[i] != ' '){
			if(str1[i] >= 'A' && str1[i] <= 'Z'){
				s1[count1++] = str1[i]+32;
			}
			else{
				s1[count1++] = str1[i];
			}
		}
	}
	s1[count1] = '\0';

	//removing Spaces and converting to Lower of str2

	for (int i=0;str2[i]!='\0';i++){
		if(str2[i] != ' '){
			if(str2[i] >= 'A' && str2[i] < 'Z'){
				s2[count2++] = str2[i]+32;
			}
			else{
				s2[count2++] = str2[i];
			}
		}
	}
	s2[count2] = '\0';

	// Sorting s1

	for(int i=0;i<count1-1;i++){
		for(int j=i+1;j<count1;j++){
			if(s1[i] > s1[j]){
				temp = s1[i];
				s1[i] = s1[j];
				s1[j] = temp;
			}
		}
	}

	// Sorting s2

	for(int i=0;i<count2-1;i++){
		for(int j=i+1;j<count2;j++){
			if(s2[i] > s2[j]){
				temp = s2[i];
				s2[i] = s2[j];
				s2[j] = temp;
			}
		}
	}
	int isAnagram = 1;

	if(count1 != count2){
		isAnagram = 0;
	}
	else{
		if(strcmp(s1,s2)){
			isAnagram = 0;
		}
	}

	if(isAnagram){
		printf("\"%s\" and \"%s\" are Anagram",str1,str2);
	}
	else{
		printf("%s and %s are not Anagram",str1,str2);
	}
}