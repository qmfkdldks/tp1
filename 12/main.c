#include <stdio.h>
#include <stdlib.h>

/*
 Escriba un programa que permita calcular la superficie de un triángulo rectángulo. El
programa debe permitir el ingreso de los valores por teclado y mostrar el resultado
por pantalla.
*/

int main()
{
    float decimales[2];
    char str[2][10] = { "base", "lado" };

    for (int i = 0; i < 2; i++)
    {
        printf("Introduzca %s: ", str[i]);
        scanf("%f", &decimales[i]);
    }

    printf("El superficie:\n");
    printf("%.4f \n", decimales[0] * decimales[1] / 2);

    return 0;
}
