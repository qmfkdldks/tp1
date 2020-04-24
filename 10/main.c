#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita al usuario, introducir 3 números enteros por
teclado, y que los visualice en pantalla, en el orden inverso al que fueron introducidos. 
*/

int main()
{
    int enteros[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Introduzca N° %d: ", i + 1);
        scanf("%d", &enteros[i]);
    }

    printf("Los números ingresados en orden inverso son:%d  %d  %d", enteros[2], enteros[1], enteros[0]);

    return 0;
}
