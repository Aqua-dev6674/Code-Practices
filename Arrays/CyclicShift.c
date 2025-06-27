#include<stdio.h>

int main(){

	int n,key,start,i,j;
	int arr[20];

	// printf("Enter No.of elements:");
	scanf("%d",&n);

	// printf("Enter elements:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	scanf("%d",&key);

	for(i =0;i<key;i++){
		start =arr[0];
		for(j=0;j<n-1;j++){
			arr[j]=arr[j+1];
		}
		arr[j]=start;
	}

	printf("After shifting array is: ");

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}