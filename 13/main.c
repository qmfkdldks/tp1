#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que permita calcular el área y el perímetro de cuadrado. El
programa deberá preguntar los valores de los lados y almacenar dichos valores,
considerando que pueden ser enteros o con decimales.
*/

int main()
{
    float lado;
    printf("Introduzca el lado del cuadrado: ");
    scanf("%f", &lado);

    printf("El superficie:\n");
    printf("%.2f \n", lado * lado);

    printf("El perimetro:\n");
    printf("%.2f \n", lado * 4);

    return 0;
}
