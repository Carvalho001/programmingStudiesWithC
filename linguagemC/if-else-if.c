#include <stdio.h>

int main(){

    int grade;

    scanf("%d", &grade);

    /*
    if(grade >= 7){
        printf("You are approved! :)\n");
    }

    if(grade < 4){
        printf("You are not aproved! :(\n");
    }

    if(grade >= 4 && grade < 7 ){
        printf("You are not approved, but you still have a chance, come to the summer school!\n");
    }
    */


    if(grade >= 7 ){
        printf("Approved");
    }else if(grade < 4 ){
        printf("Not approved");
    }else{
        printf("Summer school");    }
}
