
#include <stdio.h>

int fibonacci(int x ){

    if (x == 0 || x == 1){

        return 1;

    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }

}

int main(){
    int N;
    scanf("%d", &N);

    printf("%d", fibonacci(N));

}

