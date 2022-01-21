#include <stdio.h>

int main(){

    /*Program To help students to see if they are approved or not */

     float grade;

        scanf("%f",&grade);
        /*

        if(grade == 7 || grade > 7){
            printf("grade = %.1f;  You're approved :)\n", grade);
        }

        if(grade < 7 ){
        printf("grade = %.1f; you are not approved :( \n ", grade);
        }
        */

        /*How to change the way the a if works in C?*/

        /*To change the way of how a if structure works we must use a negation operator,
        that changes the logic of the structure, i.e. the if structure that must be true to turn,
        using the negation operator(!) will must a false statment to run.*/
    /*
        if(grade >= 7 ){
        printf(" approved :)\n");
        }

        if(!(grade>=7)){
            printf(" not approved :(\n");
        }

    */


    //Now let's use the if-else structure to solve the problem ina fastrer way

    if(grade >= 7){
        printf("Approved :)\n");
    }else{
        printf("Not approved :(\n");
    }
}
