#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int num1,num2;
printf (" ingresa un numero ");
scanf ("%i", &num1);

printf (" ingresa otro numero ");
scanf ("%i", &num2);
if (num1>num2){
    printf ("%i - %i", num2, num1);
}
else{
    printf ("%i - %i", num1, num2);
}
    return 0;
}
