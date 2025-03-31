#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int num1, num2, num3;

printf ("decime un numero ");
scanf ("%i",&num1);

printf ("decime otro numero ");
scanf ("%i",&num2);

printf ("decime otro numero mas ");
scanf ("%i",&num3);

if (num1>num2 && num1>num3)
    {
   printf ("el numero mas grande es %i ",num1);
}
if (num2>num1 && num2>num3)
    {
   printf ("el numero mas grande es %i ",num2);
}
if (num3>num2 && num3>num1)
    {
   printf ("el numero mas grande es %i ",num3);
}

    return 0;
}
