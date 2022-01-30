#include <stdio.h>

int main(){

	int X;

	scanf("%d",&X);

	int i = 1;

	do{
	printf("%d * %d = %d\n", X, i, X*i);
		i++;
		if(i > 10){
			break;

		}
	}while(X<=1000);
}

