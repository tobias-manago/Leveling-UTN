#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
int num1, num2, resultado ;

printf ("decime un numero ");
scanf ("%i",&num1);

printf ("decime otro numero ");
scanf ("%i",&num2);

if (num1 = num2)
    {
   resultado = num1 * num2 ;
   printf ("este es el resultado de tu multiplicacion %i ",resultado);
   }
if (num1>num2)
    {
    resultado = num1 - num2 ;
    printf ("este es el resultado de tu resta %i ",resultado);
}
if(num1<num2)
    {
    resultado = num1 + num2 ;
    printf ("este es el resultado de tu suma %i ",resultado);
}
    return 0;
}
