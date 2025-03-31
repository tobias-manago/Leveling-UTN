#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int num, cubo, cuarta;
    for (int i = 0;i<=10;i++)
        {
    printf ("ingresa un numero ");
    scanf ("%i",& num);
    cubo=num*num*num;
    cuarta=num*num*num*num;
    printf ("el cubo de %i es %i \n ",num,cubo);
    printf ("la cuarta de %i es %i \n ",num,cuarta);
    }


    return 0;
}
