#include <stdio.h>
#include <stdlib.h>

/*
Hacer un programa que permita ingresar dos valores enteros por teclado. El primero
se debe almacenar en una variable llamada A. el segundo (distinto del primero) en
otra variable llamada B. Se pide que intercambie los valores de A y B y los muestre en
pantalla (se deben mostrar las variables originales y luego de intercambiarlas).
*/

int main()
{
    int A, B, C;
    printf("A:");
    scanf("%d", &A);
    printf("B:");
    scanf("%d", &B);

    printf("Original A: %d, B: %d \n", A, B);
    
    C = A;
    A = B;
    B = C;

    printf("Resultado A: %d, B: %d \n", A, B);

    return 0;
}
