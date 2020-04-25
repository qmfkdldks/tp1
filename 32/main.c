#include <stdio.h>
#include <stdlib.h>

/*
Elabore un programa que realice la conversión de metros a pies
Donde 1 m = 3.2808 pies.
Por lo tanto, el usuario proporcionara el dato de N m y el programa dirá a cuantos pies
equivale.
*/

#define interest 2.5

int main()
{
  float length;

  printf("Ingrese el metro: ");
  scanf("%f", &length);
  printf("----------\n");

  printf("En la pies es: %.4f \n", length * 3.2808);
  return 0;
}