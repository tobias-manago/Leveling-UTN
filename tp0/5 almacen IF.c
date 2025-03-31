#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    float Compra, Descuento, PrecioConDescuento,CompraConDescuento;
    Descuento = 0.20;
    printf ("Hola!! si hoy tu compra supera los 5000$ tenes un 20 de descuento sobre el total ");
    printf ("\n cuanto desea gastar ? ");
    scanf ("%f",&Compra);
    if (Compra >= 5000)
        {
        PrecioConDescuento = Descuento*Compra;
        CompraConDescuento = Compra - PrecioConDescuento;
        printf ("usted debe abonar %f y se ahorro %f ", CompraConDescuento, PrecioConDescuento);
    }
    else
        {
        printf ("usted debe abonar %f",Compra);
    }
    return 0;
}
