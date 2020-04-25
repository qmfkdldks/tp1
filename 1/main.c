#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita al usuario, introducir 2 números enteros por
teclado, y que realice la suma y luego la resta de ambos números, mostrando en
pantalla ambos resultados
*/

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);

    return 0;
}
