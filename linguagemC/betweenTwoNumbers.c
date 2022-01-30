#include <stdio.h>

int main(){

    int i,j;
    scanf("%d%d", &i,&j);

        if(i<j){
            for(;i<=0 || i>=0;i++){
                printf("%d ",i);
                    if( i <= -100 || i >=j){
                        break;
                    }
            }
            }


            if(j<i){
            for(;j<=0 || j>=0;j++){
                printf("%d ",j);
                    if( j <=-100 || j >= i){
                        break;
                    }
            }
            }





}
