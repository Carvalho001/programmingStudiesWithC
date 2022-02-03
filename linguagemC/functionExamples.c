
#include <stdio.h>

/*int sum(int a,int b){

int s = a+b;

return s;

}*/


/*
float anotherSum(float c, float d){

    float su = c+d;

    return su;
}

*/


/*
    int min(int a, int b){

    if(a < b){
        return a;
    }else{
        return b;
    }

    }*/

    int avarage(int a, int b){

    int c = (a+b)/2;

    return c;

    }


    int main(){
    /*int x = sum(2,3);

    printf("%d\n",x);
    */


    /*float z = sumWithRealNum(3.44 ,2.55);

    printf("%f\n",z);

    //or

    float f,g;

    scanf("%f %f",&f,&g);

    printf("%f",sumWithRealNum(f,g));
    */

    /*
    int x, y;

    scanf("%d %d", &x,&y);

    printf("%d", min(x,y));*/

    int x,y;

    scanf("%d %d", &x,&y);

    printf("%d", avarage(x,y));

}
