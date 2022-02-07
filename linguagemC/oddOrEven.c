#include <stdio.h>

int cinoFingers, binoFingers;

int readTheFingers(){
scanf("%d %d", &binoFingers, &cinoFingers);

}

int main(){

    readTheFingers();
    int sum = binoFingers + cinoFingers;

    if(sum%2==0){
    printf("Bino\n");

    }else{
    printf("Cino\n");
    }
}
