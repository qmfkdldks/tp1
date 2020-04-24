#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita introducir por teclado, el importe de un depósito
bancario que se desea realizar, y que muestre por pantalla, cuanto obtendría en caso
de depositar por 3 meses (3% mensual) 6 meses (3,2% mensual) o 12 meses (3,9%
mensual). El programa debe mostrar en pantalla los valores al final del depósito, según
los plazos mencionados, con su respectivo interés calculado
*/

int main()
{
  float importe;

  printf("Ingrese el importe: ");
  scanf("%f", &importe);

  printf("3 meses (3%% mensual): Te queda $ %.2f \n", importe + (importe * 3 / 100));
  printf("6 meses (3,2%% mensual): Te queda $ %.2f \n", importe + (importe * 3.2 / 100));
  printf("12 meses (3,9%% mensual): Te queda $ %.2f \n", importe + (importe * 3.9 / 100));
  return 0;
}