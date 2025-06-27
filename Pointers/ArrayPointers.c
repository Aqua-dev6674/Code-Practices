#include<stdio.h>

int main(){

	int arr[] = {10,20,30,40,50};
	int *p = arr; 

	// printf("%d \n",*p);
	// printf("%d \n",*(p+1));
	// printf("%d \n",*(p+2));
	// printf("%d \n",sizeof(a));

	//OR

	for(int i=0;i<5;i++){
		printf("Element %d = %d \n",i,*(p+i));
	}

	return 0;
}