#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que permita al usuario introducir un valor expresado en Horas, y
calcule su equivalente en Minutos y en Segundos
*/

int main()
{
  float hour;

  printf("Ingrese la hora: ");
  scanf("%f", &hour);

  printf("----------\n");

  printf("En minutos es: %.2f \n", hour * 60);
  printf("En segundos es: %.2f \n", hour * 60 * 60);

  return 0;
}