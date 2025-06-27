#include<stdio.h>

int main(){

	int n,pos,ele,temp;
	int arr[20];

	// printf("Enter No.of elements:");
	scanf("%d",&n);

	// printf("Enter elements:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	// printf("Enter position:");
	scanf("%d",&pos);

	temp = arr[pos-1];
	for(int i=0;i<n;i++){

		if(i >= pos-1){
			arr[i]=arr[i+1];
		}
	}


	printf("After deleting %d, array is: ",temp);

	for(int i=0;i<n-1;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}