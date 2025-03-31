#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Suponga que una persona va a invertir su capital en un banco
     y desea saber cuánto dinero ganará después de un mes si el banco paga el 2% mensual. */
    float capital, ganancia, interes;
    int meses;
    ganancia = 0;
    interes = 0.02;
    capital = 0;
    meses = 0;
    printf ("Hola somos banco Depositos Humo!!");

    printf ("\n cuantos USD desea invertir ? ");
    scanf ("%f",&capital);

    printf ("\n cuantos meses desea invertir su dinero ? ");
    scanf ("%i",&meses);

    ganancia = meses * interes * capital;

    printf("usted estaria recibiendo %.2f USD de ganancia al finalizar los %i meses usted tendra un total de %.2f $ "
,ganancia,meses,capital+ganancia);

return 0;
}
