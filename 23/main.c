#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita, a partir de una X Cantidad de grados Centígrados,
convertirlo a Fahrenheit
*/

int main()
{
  printf("Grados centígrados a grados Fahrenheit\n");
  printf("-----------------------------------------\n");

  double grado;

  printf("Ingrese el grado centígrados: ");
  scanf("%lf", &grado);

  printf("El promedio es: %.2f \n", (grado * 9 / 5) + 32);
  return 0;
}