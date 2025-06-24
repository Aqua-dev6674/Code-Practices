#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i+1;j++){
			printf("  ");
		}
		int value = 1;
		for(int k=0;k<2*i+1;k++){
			value = value * (k+1)/(i-1);
			printf("%d ",value);
		}
		printf("\n");
	}

	return 0;
}