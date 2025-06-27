//Finding min and max values in an array

#include<stdio.h>

int main(){

	int n,max,min;
	int arr[20];

	scanf("%d",&n);

	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	max= arr[0];
	min = arr[0];

	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}

	printf("Maximum number in the array is: %d\n",max);
	printf("Minimum number in the array is: %d\n",min);
}