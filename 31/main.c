#include <stdio.h>
#include <stdlib.h>

/*
Elabore un programa que realice la conversión de cm. a pulgadas.
Donde 1cm = 0.39737 pulgadas.
Por lo tanto, el usuario proporcionara el dato de N cm. y el programa dirá a cuantas
pulgadas es equivalente
*/

#define interest 2.5

int main()
{
  float length;

  printf("Ingrese el cm: ");
  scanf("%f", &length);
  printf("----------\n");

  printf("En la pulgada es: %.4f \n", length * 0.39737);
  return 0;
}