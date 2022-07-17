#include <stdio.h>

int main()
{

    /*
    int vetor [4];
    tipo nome quantidade


    */
    /*
    int v [3];

    v[0] = 1;
    v[1] = 4;
    v[2] = 3;
    printf("%d %d %d\n", v[0], v[1],v[2]);
    printf("%d %d %d\n", *v, *v+1, *v+2);
    */

    int vet [10], i, x,g=1;

    for(i = 0; i<10; i++)
    {
        scanf("%d /n", &vet[i]);
    }


    scanf("%d\n", &x);



    for(i=0; i<10; i++)
    {

        if(x==vet[i])
        {
            printf("SIM");
            g=0;
            break;

        }
    }

    if(g==1)
    {
        printf("NAO");

    }



}
