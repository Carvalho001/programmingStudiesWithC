
#include <stdio.h>

/*
//A recursividade ocorre quando uma função chama ela mesma.


int factorial (int x){

if(x == 0 ){
    return 1; //caso base(é o caso onde eu já sei o resultado da operação ou problema)

    }else {
    return x *(x-1); //recursão(é algo como um recurso utilizado para alcançar o resultado do problema com objeto variáveis)

        }

}

int main(){
int N;
scanf("%d",&N);
printf("o fatorial de %d é %d\n", N, factorial(N));


}*/


#include <stdio.h>


int factorial(int x){


    int i;
	if( x == 0 || x==1){
		return 1;

		}else{
            return x *factorial(x-1);

			}


}

int main(){

	int N ;
	scanf("%d",&N);
	printf("%d",factorial(N));
}
