#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que calcule intereses. Se pide que ingrese por teclado el porcentaje
de interés mensual. El importe a considerar y el plazo en meses para mostrar los
resultados en pantalla.
*/

int main()
{
  float month, interest, import;

  printf("Ingrese el porcentaje de interes mensual: ");
  scanf("%f", &interest);
  printf("Ingrese el importe: ");
  scanf("%f", &import);
  printf("Ingrese el plazo en meses: ");
  scanf("%f", &month);
  printf("----------\n");

  printf("El total seria: %.2f \n", import + import * (interest / 100) * month);
  return 0;
}