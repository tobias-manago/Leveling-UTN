#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
int numero;
    printf ("ingrese un numero de la tabla: ");
    scanf("%i",&numero);
    for (int i=0;i<=10 ;i++){
        printf ("%i x %i = %i \n ",numero, i, numero * i);
    }

    return 0;
}
