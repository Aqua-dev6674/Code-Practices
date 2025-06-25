//Geometric Progression - 0 0 7 6 14 12 21 18 28 24 .....

#include<stdio.h>


int main(){

	int i,n,six=0,seven =0;

	scanf("%d",&n);

	for(i = 1; i<= n; i++){


		if (i % 2 == 0){
			printf("%d ",six);
			six += 6;
		}
		else{
			printf("%d ",seven);
			seven += 7;
		}

		
	}

	if(n%2==0){
		printf("\nThe %dth term of the series is %d ",n,six-6);
	}
	else{
		printf("\nThe %dth term of the series is %d ",n,seven-7);
	}


	return 0;
}