#include <stdio.h>
#include <math.h>

int main()
{

    int edad;
    char genero;

    printf("ingrese su edad ");
    scanf("%i",&edad);

    printf("ingrese su genero ");
    fflush(stdin);
    scanf("%c",&genero);




    if(edad >=18 && genero == 'h')
{
    printf("sos mayor y sos hombre");
}
else if (edad >= 18 && genero == 'm')
{
    printf ("sos mayor y sos mujer");
}
else if (edad < 18 && genero == 'h')
{
    printf ("sos menor y sos hombre ");
}
else
{
    printf ("sos menor y sos mujer ");
}
return 0;
}
