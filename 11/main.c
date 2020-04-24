#include <stdio.h>
#include <stdlib.h>

/*
Modifique el programa anterior para que los números ingresados sean decimales,
pero esta vez debe mostrarlos uno debajo del otro. Ej:
*/

int main()
{
    float decimales[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Introduzca N° %d: ", i + 1);
        scanf("%f", &decimales[i]);
    }

    printf("Los números ingresados en orden inverso son:\n");
    printf("%.4f \n", decimales[2]);
    printf("%.4f \n", decimales[1]);
    printf("%.4f \n", decimales[0]);

    return 0;
}
