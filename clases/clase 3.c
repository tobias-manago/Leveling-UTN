#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    /*int i = 0;
    while (i<10){
        printf ("el valor de i es: %i \n",i);

     i++;
    }
    int j = 0;
    do{ printf ("el valor de j es de : %i ",j)
     j++;
    }while(j<10); */
    int numero;
    printf ("ingrese un numero de la tabla: ");
    scanf("%i",&numero);
    for (int i=0;i<=10 ;i++){
        printf ("%i x %i = %i \n ",numero, i, numero * i);

    }

    return 0;
}
