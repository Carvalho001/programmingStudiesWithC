
#include <stdio.h>



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


}
