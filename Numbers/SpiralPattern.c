// Clockwise Spiral Pattern
/* 1 2 3
   8 9 4
   7 6 5 */


#include<stdio.h>


int main(){

	int n;

	scanf("%d",&n);
	int spiral[n][n];

	int num = 1,top=0,left=0,bottom = n-1,right = n-1;

	while(top<=bottom && left <= right){
		for(int i =left;i<=right;i++){
			spiral[top][i] = num++;
		}
		top++;
		for(int i=top;i<=bottom;i++){
			spiral[i][right] = num++;
		}
		right--;
		for(int i=right;i>= left;i--){
			spiral[bottom][i]=num++;
		}
		bottom--;
		for(int i=bottom ; i>= top;i--){
			spiral[i][left] = num++;
		}
		left++;
	}

	printf("Spiral Pattern is:\n");

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d ",spiral[i][j]);
		}
		printf("\n");
	}

	return 0;
}