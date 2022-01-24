
#include <stdio.h>

int main(){

/* Positive, Negative or Null
	int x ;
	scanf("%d", &x);

	if( x > 0 ){
		printf("positivo");
	}else if (x < 0 ){
		printf("negativo");
	}else if (x == 0 ){
		printf("nulo");
	}
*/

/*  Fail, Approved or Final.

	  float n1,n2;

    scanf("%f%f", &n1,&n2);

    if(((n1 * 2) + (n2*3))/5 >= 7 ){
        printf("Aprovado");
    }else if( ((n1*2) + (n2*3))/5 < 3 ){
        printf("Reprovado");
    }else{
        printf("Final");
    }
*/
        //Quadrant

        int x,y ;

        scanf("%d%d", &x,&y);

        if(x > 0 && y > 0 ){

            printf("Q1");
        }else if(x < 0 && y > 0){
            printf("Q2");
        }else if(x < 0 && y < 0){
            printf("Q3");
        }else if(x > 0 && y < 0){
            printf("Q4");
        }else{
            printf("eixos");
        }




}
