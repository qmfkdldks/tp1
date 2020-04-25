#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que permita calcular el costo de una llamada telefónica. Para eso
se pide que ingrese por teclado, la duración de la llamada (Expresada en minutos,
enteros) Considere que el costo de la llamada es de $0.054 el segundo.
*/

int main()
{
  int minutes;
  printf("Duración de la llamada: ");
  scanf("%d", &minutes);

  float total = 0.054 * (float)(60 * minutes);
  printf("TOTAL A PAGAR:  $%.2f\n", total);

  return 0;
}