//LexcioGraphical Pyramid pattern

#include<stdio.h>

int main()
{
	char ch = 'A';
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n-i);j++){
			printf(" ");
		}

		for(int k = 0;k<i;k++){
			printf("%c ",ch++);
			if(ch == '['){
				ch = 'A';
			}
		}

		printf("\n");

	}


	return 0;
}