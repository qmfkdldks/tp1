#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita ingresar un número por teclado y muestre en
pantalla, ese número elevado al cuadrado y el mismo número elevado al cubo
*/

int main()
{
  float number;

  printf("Introduzca un numero\n");
  scanf("%f", &number);

  printf("Elevado al cuadrado: %.2f \n", number * number);
  printf("Elevado al cubo: %.2f \n", number * number * number);
  return 0;
}