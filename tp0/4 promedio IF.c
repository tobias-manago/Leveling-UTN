#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
float nota1, nota2, nota3, promedio;
printf ("cual fue el resultado de tu primer nota ? ");
scanf("%f",&nota1);

printf ("cual fue el resultado de tu segunda nota ? ");
scanf("%f",&nota2);

printf ("cual fue el resultado de tu tercer nota ? ");
scanf("%f",&nota3);

promedio = (nota1 + nota2 + nota3) / 3 ;

if (promedio >= 7)
    printf ("usted aprobo el trimestre con un promedio de %.2f ",promedio);
else
    printf ("usted esta desaprobado con un promedio de %.2f ",promedio);
    return 0;
}
