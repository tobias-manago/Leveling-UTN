#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    /*Un obrero necesita calcular su salario semanal,
     el cual se obtiene de la siguiente manera: si trabaja 40 horas o menos se le paga $300 por hora,
      si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra
      */
    int horasTrabajadas,horasRemuneradas,horasExtra;
    printf ("cuantas horas trabajaste esta semana ? ");
    scanf ("%i",&horasTrabajadas);

    if (horasTrabajadas<=168)
    {
        if (horasTrabajadas <= 40)
            {
                horasRemuneradas = horasTrabajadas * 300;
            }
        else (horasTrabajadas>=40);
            {
                horasRemuneradas = (40*300) + (horasTrabajadas - 40) * 400;
                printf ("esta semana vas a cobrar %i ",horasRemuneradas);
            }

    }
    else
    {
        printf ("este programa solamente calcula las horas semanales");
    }
    return 0;
}
