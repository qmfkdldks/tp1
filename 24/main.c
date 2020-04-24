#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita introducir las notas de 4 materias: QUIMICA, FISICA,
MATEMATICA e INFORMATICA, y que a partir de las notas, calcule el promedio general
de notas.
*/

int main()
{
  char nombres[4][12] = {"QUIMICA",
                         "FISICA",
                         "MATEMATICA",
                         "INFORMATICA"};
  float sum = 0;

  for (int i = 0; i < 4; i++)
  {
    float aux;
    printf("Ingrese la nota de la %s :", nombres[i]);
    scanf("%f", &aux);
    sum = sum + aux;
  }

  printf("El promedio es: %.2f \n", sum / 4);
  return 0;
}