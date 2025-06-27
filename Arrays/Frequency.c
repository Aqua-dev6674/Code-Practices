// 1 2 3 3 4 -> 1-1 -> 2-1 -> 3-2 -> 4-1


#include<stdio.h>

int main(){

	int n,arr[30],freq[30][30];


	// printf("Enter No.of elements:");
	scanf("%d",&n);

	// printf("Enter elements:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0;i<n;i++){
		freq[i][0] = 0;
	}

	for(int i=0;i<n;i++){
		freq[arr[i]-1][0]+=1;
	}

	for(int i=0;i<n;i++){
		if(freq[i][0] != 0){
			printf("%d is occured %d times\n",i+1,freq[i][0]);
		}
	}

	return 0;
}