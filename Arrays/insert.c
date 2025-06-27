#include<stdio.h>

int main(){

	int n,pos,ele;
	int arr[20];

	// printf("Enter No.of elements:");
	scanf("%d",&n);

	// printf("Enter elements:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	// printf("Enter position:");
	scanf("%d",&pos);
	scanf("%d",&ele);
	pos = pos-1;

	// int prev,next;
	// for(int i=0;i<n+1;i++){

	// 	if(i == pos){
	// 		prev = arr[i];
	// 		arr[i] = ele;
	// 	}
	// 	else if(i > pos){
	// 		next = arr[i];
	// 		arr[i] = prev;
	// 		prev = next;
	// 	}

	// }
	//OR


	for(int i=n;i>pos;i--){

		arr[i] = arr[i-1];
	}
	arr[pos] = ele;

	printf("After inserting the %d in %d position array is: ",ele,pos+1);

	for(int i=0;i<n+1;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}