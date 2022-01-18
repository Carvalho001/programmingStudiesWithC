#include <stdio.h>

int main(){



    int number1;

    printf("Type the number and see if it is an even number: ");
    scanf("%d", &number1);

    if(number1%2 == 0 ){
        printf("Your number is an even number, congrats!\n");
    }else{
        printf(":(   damn, your  number is an odd!\n");
    }
}
