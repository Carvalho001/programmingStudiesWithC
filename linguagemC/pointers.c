#include <stdio.h>

 //these are pointers
 /*

 int *p;
 float*f;



int x = 5; //create the integer variable x and assign the value 5 to it

int *p = &x; //cretae the integer pointer p and assing the address of x to it

int y = 9; // create the integer variable y and assing the value 9 to it

p = &y; // assing the address of y to the pointer p

*/

int main(){

/*
    int x = 5;

    int *p = &x;

 printf("%d\n", *p);
*/


/*
int var = 257;

int *pointer = &var;

printf("%d\n",*pointer);

*pointer = 358;

printf("%d\n", *pointer);
*/


printf("Size of an integer: %d\n", sizeof(int));

int x = 1;

int *p = &x;

printf("p points to %d\n", p);
printf("p+1 points to %d\n", p+1);
printf("p+2 points to %d\n", p+2);


}




