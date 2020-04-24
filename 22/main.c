#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita ingresar 5 números enteros por teclado y que
muestre en pantalla el promedio.
Nota: Al igual que el programa anterior, se pide que se coloque un título para mostrar
en pantalla que hace el programa y sus resultados.
*/

int main()
{
  printf("CALCULA EL PROMEDIO ENTRE LOS 5 NUMEROS\n");
  printf("-----------------------------------------\n");

  double number[5], sum;

  printf("Ingrese 5 valores: \n");
  scanf("%lf %lf %lf %lf %lf", &number[0], &number[1], &number[2], &number[3], &number[4]);

  for (int i = 0; i < 5; i++)
  {
    sum = sum + number[i];
  }

  printf("El promedio es: %.2f \n", sum / 5);
  return 0;
}