#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
int cantAlumHom,cantAlumMuj,totalAlum;
float porcentajeHombres,porcentajeMujeres;

printf ("\n cual es la cantidad de alumnos hombres que hay en el curso ");
scanf ("%i",&cantAlumHom);

printf ("\n cual es la cantidad de alumnos mujeres que hay en el curso ");
scanf ("%i",&cantAlumMuj);

totalAlum=cantAlumHom+cantAlumMuj;

porcentajeHombres=(cantAlumHom*100)/totalAlum;
porcentajeMujeres=(cantAlumMuj*100)/totalAlum;

printf("el porcentaje de hombres en el curso es de %.2f %% y el de mujeres es de %.2f %% ",porcentajeHombres,porcentajeMujeres);


    return 0;
}
