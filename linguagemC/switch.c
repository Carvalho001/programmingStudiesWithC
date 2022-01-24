#include <stdio.h>

int main(){

    int identifier ;

    scanf("%d", &identifier);

    /*
    if(identifier == 1 ){
        printf("paper\n");
    }else if(identifier == 2 ){
        printf("scissors\n");
    }else if(identifier == 3){
        printf("glue\n");
    }else if(identifier == 4){
        printf("pen\n");
    }

    */

    switch(identifier){

    case 1:
    printf("paper\n");
    break;

    case 2:
    printf("scissors\n");
    break;

    case 3:
    printf("glue\n");
    break;

    case 4:
    printf("pen\n");
    break;

    default://we can use the dafult mark to put a error message in case of a invalid value being typed.
    printf("invalid identifier\n");//every time that a different value of the cases be typed, this message will be printed.

    }
}
