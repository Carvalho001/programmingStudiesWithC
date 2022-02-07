#include <stdio.h>
/*
int aux(){

int a =  9;

int b = 123;

printf("aux -> %d %d\n", a,b);

}
*/



/*
int main(){

    int a = 22;

    printf("main -> %d\n", a);

    aux();
}

*/

/*
int sum(int a, int b){

int c = a+b;
return c ;

}

int main(){

printf("%d\n", sum(2,5));
}
*/

int global = 1;

int aux(){
    printf("%d\n",global);

    global = 3;

}


int main(){

    printf("%d\n", global);

    global =2;

    aux();

    printf("%d\n", global);


}
