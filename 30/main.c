#include <stdio.h>
#include <stdlib.h>

/*
Modificar el programa anterior, considerando que ahora, el interés es una constante
definida en el programa y es del 2.5% mensual. Se pide que ingrese el importe y el
plazo y se muestre el importe al final del periodo (importe inicial + interés del 2.5%
mensual)
*/

#define interest 2.5

int main()
{
  float month, import;

  printf("Ingrese el importe: ");
  scanf("%f", &import);
  printf("Ingrese el plazo en meses: ");
  scanf("%f", &month);
  printf("----------\n");

  printf("El importe al final del periodo seria: %.2f \n", import + import * (interest / 100) * month);
  return 0;
}