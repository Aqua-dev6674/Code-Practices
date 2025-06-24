#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			// i == j || i == 0 || j == n-1
			// j == (n-i-1) || i == 0 || j == 0
			// j == (n-i-1) || i == n-1 || j == n-1
			if (i==j || i== n-1 || j == 0){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}