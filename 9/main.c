#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita realizar la división de 2 (dos) números del tipo coma
flotante ingresados por teclado.
*/

int main()
{
    float A, B;
    printf("A:");
    scanf("%f", &A);
    printf("B:");
    scanf("%f", &B);

    printf("División: %.2f", A / B);
    
    return 0;
}
