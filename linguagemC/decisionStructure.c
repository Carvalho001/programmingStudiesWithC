
#include <stdio.h>

int main(){
    printf("%d\n", 1<2);
    printf("%d\n", 3>4);

    /*The output will be -
        first Printf = 1(1 is the same of true);
        second printf = 0(0 is the same of false);
    */

    //if structure
        /* if( condition ){
                Code
            }
        */

    if(1<2){
        printf("1 less thant 2.\n");

    }

    /*Program that read a certain value x and tells if its even or odd*/

    int x;

    scanf("%d", &x);

    if(x%2==0){
        printf("%d is even", x);
    }else{
        printf("%d is odd", x);
    }


}
