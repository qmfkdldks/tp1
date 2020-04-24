#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa que permita donde se le solicite que ingrese las iniciales de su
nombre. Deben ser 3 iniciales y se deben ingresar de a una a la vez. Luego, se pide
mostrar en pantalla las tres letras (iniciales) de su nombre, separadas por un (-).
Ej:
Ingrese 1er Inicial: G
Ingrese 2da Inicial: A
Ingrese 3er Inicial: A
Ud. Ingreso: G-A-A
*/

int main()
{
    char inciales[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Introduzca %der inicial: ", i + 1);
        scanf(" %c", &inciales[i]);
    }

    printf("Ud. Ingreso: %c-%c-%c \n", inciales[0], inciales[1], inciales[2]);
    return 0;
}
