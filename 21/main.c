#include <stdio.h>
#include <stdlib.h>

/*
Haga un programa que permita calcular la raíz cuadrada de un valor ingresado por
teclado. ➔ Función sqrt
*/

double sqrt(double n)
{
  return n * n;
}

int main()
{
  double number;

  printf("Ingrese Valor: ");
  scanf("%lf", &number);

  printf("El Nro: X elevado al cuadrado es: %.2f \n", sqrt(number));
  return 0;
}