#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  int cantCamisas, precioCamisas;
  float descuento_1, descuento_2, descontado, precioFinal;
  descuento_2 = 0.2 ;
  descuento_1 = 0.1 ;

  printf ("Cuantas camisas vas a comprar ? ");
  scanf ("%i", &cantCamisas);

  printf ("cual es el precio total de las camisas ? ");
  scanf ("%i", &precioCamisas);

  if (cantCamisas >= 3)
    {
     descontado = precioCamisas * descuento_2 ;
     precioFinal = precioCamisas - descontado ;
     printf ("aplicando un descuento del 20 usted deberia pagar %f por las camisas compradas",precioFinal);
    }
    else
    {
     descontado = precioCamisas * descuento_1 ;
     precioFinal = precioCamisas - descontado ;
     printf ("aplicando un descuento del 10 usted deberia pagar %f por las camisas compradas",precioFinal);
    }
    return 0;
}
