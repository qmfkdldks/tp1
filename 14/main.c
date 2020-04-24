#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa donde se deban introducir 2 valores enteros por teclado. El primer
valor se debe guardar en una variable llamada a. El 2do en otra llamada b. Luego el
programa debe resolver la ecuación: (a-b) (a+b)
*/

int main()
{
    int a, b;
    printf("Introduzca a: ");
    scanf("%d", &a);

    printf("Introduzca b: ");
    scanf("%d", &b);

    printf("El resultado:\n");
    printf("%d \n", (a - b) * (a + b));

    return 0;
}
