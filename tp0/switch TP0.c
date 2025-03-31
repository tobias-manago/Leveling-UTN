#include <stdio.h>
#include <stdlib.h>

void ejecutarPrograma(int opcion) {
    switch(opcion) {
        case 1:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/1 interes.exe\"");
            break;
        case 2:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/2 descuento.exe\"");
            break;
        case 3:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/3 alumnos.exe\"");
            break;
        case 4:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/4 promedio IF.exe\"");
            break;
        case 5:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/5 almacen IF.exe\"");
            break;
        case 6:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/6 sueldo IF.exe\"");
            break;
        case 7:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/7 num asc..exe\"");
            break;
        case 8:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/camisas.exe\"");
            break;
        case 9:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/9 IF multiplicar, resta, suma.exe\"");
            break;
        case 10:
            system("\"C:/Users/Win10/Desktop/Tobias/UTN/tp0/10. 3 !=.exe\"");
            break;
        case 11:
            system("C:\\ruta\\programa11.exe");
            break;
        case 12:
            system("C:\\ruta\\programa12.exe");
            break;
        case 13:
            system("C:\\ruta\\programa13.exe");
            break;
        case 14:
            system("C:\\ruta\\programa14.exe");
            break;
        case 15:
            system("C:\\ruta\\programa15.exe");
            break;
        case 16:
            system("C:\\ruta\\programa16.exe");
            break;
        case 0:
            printf("Saliendo...\n");
            exit(0);
        default:
            printf("Opción inválida. Intente de nuevo.\n");
    }
}

int main() {
    int opcion;

    do {
        printf("\nMenú de Programas:\n");
        printf(" 1 - Ejecutar Programa 1\n");
        printf(" 2 - Ejecutar Programa 2\n");
        printf(" 3 - Ejecutar Programa 3\n");
        printf(" 4 - Ejecutar Programa 4\n");
        printf(" 5 - Ejecutar Programa 5\n");
        printf(" 6 - Ejecutar Programa 6\n");
        printf(" 7 - Ejecutar Programa 7\n");
        printf(" 8 - Ejecutar Programa 8\n");
        printf(" 9 - Ejecutar Programa 9\n");
        printf("10 - Ejecutar Programa 10\n");
        printf("11 - Ejecutar Programa 11\n");
        printf("12 - Ejecutar Programa 12\n");
        printf("13 - Ejecutar Programa 13\n");
        printf("14 - Ejecutar Programa 14\n");
        printf("15 - Ejecutar Programa 15\n");
        printf("16 - Ejecutar Programa 16\n");
        printf(" 0 - Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        ejecutarPrograma(opcion);


    } while(opcion != 0);

    return 0;
}
