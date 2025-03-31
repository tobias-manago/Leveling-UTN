#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    /*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente
     desea saber cuánto deberá pagar finalmente por su compra*/

float descuento,descontado, total, compra;
     printf("\n Hola!! cual es el valor de su compra ? ");
     scanf("%f",&compra);

descuento = 0.15;
descontado = compra * descuento;

total=compra-descontado;
printf ("tiene un descuento del 15 %% !!! por ende su compra de %.2f $ le salio %.2f $ menos en el total de su compra y debe abonar %.2f $",compra,descontado,total);
return 0;
}
