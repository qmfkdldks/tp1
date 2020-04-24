#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, incremento, decremento;
    scanf("%d", &valor);

    incremento = valor + 1;
    decremento = valor - 1;

    printf("VALOR: %d \n", valor);
    printf("INCREMENTO: %d \n", incremento);
    printf("DECREMENTO: %d", decremento);

    return 0;
}
