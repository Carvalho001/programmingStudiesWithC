#include <stdio.h>

int main(){

//AND
    /*how to chek if a number is even and positive*/

    int x;
    scanf("%d",&x);

    /*
    if(x%2==0){
        if(x>0){
        printf("%d is evend and positive\n",x);
        }
    }
    */


    if(x % 2 == 0 && x > 0){
        printf("%d is evend and positive\n",x);
    }


//OR

/* how to find out if a number is even or positive?*/
        /*
        if(x % 2 == 0){
            printf("%d is even or positive\n",x);
        }

        if(x > 0){
            printf("%d is even or positive\n", x);

        }
        */

        if(x % 2 == 0 || x > 0 ){
            printf("%d is evenr or positive", x);
        }





}
