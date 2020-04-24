#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que permita ingresar una X cantidad de días, y que como
resultado, muestre en pantalla, la cantidad de minutos y segundos que hay en esa X
cantidad de días.
*/

int main()
{
    int days;
    printf("Introduzca cantidad de dias: ");
    scanf("%d", &days);

    printf("La cantidad de minutos: ");
    printf("%d \n", days * 1440);

    printf("La cantidad de segundos: ");
    printf("%d \n", days * 86400);

    return 0;
}
