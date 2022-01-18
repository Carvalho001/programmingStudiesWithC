
#include <stdio.h>

int main(){

    /*
    Program - comments
    This is an example program for
    showing how to use comments.

    */

    int a,b; //Declare variable a and b

    scanf("%d%d", &a,&b); // Read Two values

    printf("sum = %d\n", a+b); // Print the sum of a+b

    //printf options

    printf("Neps\nAcadmey\n4\n6");

    printf("Neps\nAcademy\n");", e);

    printf("Hello Wolrd\n");

    //tabulation

    printf("Hello\tWolrd\n");

    printf("Language \\c\n");

    printf("%d \% %d = %d\n", 10, 7, 10%7);

        int c = 45;
    printf("[%d]\n", c);

    printf("[%7d]\n",c);

    printf("[%-7dhi]\n",c);

    int d= 232324;

    printf("%8d\n",d);

    int e = 345;

    printf("%010d\n", e);

    //to print a desired quantity of decimal
    //places we use the follow formula
    //printf("%.[x]f");

    float real = 1223.543;

    /*to print a number in octal form
    we do as below*/

     printf("%.5f\n",real);
     printf("%o\n", 94);


    /*To print a number in the hexadeicmal form, we can
    use two ways. */

    //first

    printf("%x\n", 10);
    printf("%x\n", 15);

    //second

    printf("%X\n", 5);
    printf("%X\n", 13);
}
