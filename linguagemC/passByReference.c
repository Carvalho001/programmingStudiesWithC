
#include <stdio.h>

/*int funcao(int *p){

//here comes the code
// o ponteiro como parametro significa uma passagem por ferencia
}*/




/*int troca(int a, int b){

    int aux = a ;

    a=b;
    b=aux;

    printf("troca --> a = %d e b = %d\n", a,b);
}

int main(){

        int a = 1;

        int b = 2;

        printf("main --> a = %d e b = %d\n", a, b);

        troca(a,b);

        printf("main --> a = %d e b = %d\n", a, b);

}
*/


int troca(int *a, int*b){

    int aux = *a;

    *a = *b;

    *b = aux;

    printf("troca --> a  %d e b = %d\n", *a,*b);

}

int main(){
    int a = 1;

    int b = 2;

    printf("main --> a = %d e b = %d\n", a,b);

    troca(&a,&b);

    printf("main --> a = %d e b = %d\n", a,b);

}


