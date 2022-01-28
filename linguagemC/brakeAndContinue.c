#include <stdio.h>

int main(){


    int i;

    for(int i = 0 ; i < 6 ; i++){
        if(i == 2){
            continue;

        }

        printf("%d\n", i);
        }

        //continue command jump the code snippet before it

printf("------------------\n");


    for(i = 0; i < 6; i++){

        if(i == 2){

        break;
        }
        printf("%d\n", i);
    }

    //break command ends a loop repetition

}
