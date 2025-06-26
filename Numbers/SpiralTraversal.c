// Clockwise Spiral Pattern
/* 1 2 3
   8 9 4
   7 6 5 */


#include<stdio.h>


int main(){

	int n;

	scanf("%d",&n);
	int spiral[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&spiral[i][j]);
		}
	}
	printf("Spiral Traversal is:\n");
	
	int num = 1,top=0,left=0,bottom = n-1,right = n-1;

	while(top<=bottom && left <= right){
		for(int i =left;i<=right;i++){
			printf("%d ->",spiral[top][i]);
		}
		top++;
		for(int i=top;i<=bottom;i++){
			printf("%d ->",spiral[i][right]);
		}
		right--;
		for(int i=right;i>= left;i--){
			printf("%d ->",spiral[bottom][i]);
		}
		bottom--;
		for(int i=bottom ; i>= top;i--){
			printf("%d ->",spiral[i][left]);
		}
		left++;
	}




	return 0;
}