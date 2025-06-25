//Geometric Progression - 1 1 2 3 4 9 8 27....

#include<stdio.h>
#include<math.h>

int main(){

	int i,n,two = 1,three = 1;

	scanf("%d",&n);

	for(i = 1; i<= n; i++){


		if (i % 2 == 0){
			printf("%d ",three);
			three *= 3;
		}
		else{
			printf("%d ",two);
			two *= 2;
		}

		
	}

	if(n%2==0){
		printf("\nThe %dth term of the series is %d ",n,three/3);
	}
	else{
		printf("\nThe %dth term of the series is %d ",n,two/2);
	}

	//OR

	if(n%2 != 0){
		printf("\n%d\n",(int)pow(2,n/2));
	}
	else{
		printf("\n%d\n",(int)pow(2,n/2-1));
	}

	return 0;
}