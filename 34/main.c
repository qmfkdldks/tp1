#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escribir un programa que calcule la hipotenusa de un triángulo rectángulo.
*/

int main()
{
  float a, b;

  printf("Ingrese la longitude del lado a: ");
  scanf("%f", &a);

  printf("Ingrese la longitude del lado b: ");
  scanf("%f", &b);
  printf("----------\n");

  printf("En hipotenusa es: %.2f \n", sqrt((a * a + b * b)));
  return 0;
}