#include <stdio.h>
#include <stdlib.h>


void HolaMundo();
int suma();

int main()
{
    HolaMundo();
    int num1, num2;
    printf(" \n ingresa 2 numeros ");
    scanf("%i",&num1);
    scanf("%i",&num2);
    int resultado = suma(num1, num2);
    printf(" %d", resultado);
    return 0;
}
void HolaMundo(){
 printf("Hola Mundo ");
}

int suma(num1, num2){
    int suma;
suma = num1+num2;
return suma;
}
