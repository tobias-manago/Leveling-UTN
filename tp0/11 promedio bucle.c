#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
float nota, promedio,sumatoria;
 for (int i = 1;i<=7 ;i ++){
    printf ("decime tu %i nota: ",i);
    scanf ("%f",&nota);
    sumatoria = sumatoria + nota;
 }
 promedio = sumatoria / 7 ;
 printf ("tu promedio fue de %.2f",promedio);
    return 0;
}
