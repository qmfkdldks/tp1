#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

/*
Escriba un programa que permita calcular el área y el perímetro de un círculo
cualquiera. El programa al igual que el ejercicio anterior, deberá permitir el ingreso 
por teclado de la información necesaria para procesar el cálculo y mostrarlo en
pantalla
*/

int main()
{
  float radius;

  printf("Introduzca radio\n");
  scanf("%f", &radius);

  printf("Perimetro: %.2f \n", M_PI * 2 * radius);
  printf("Area: %.2f \n", M_PI * radius * radius);
  return 0;
}