#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que permita introducir el precio de un producto, y que calcule su
valor final, aplicando un 21% de IVA.
*/

int main()
{
  char name[10];
  float price;

  printf("Ingrese el nombre: ");
  scanf("%s", name);
  printf("Ingrese el precio: ");
  scanf("%f", &price);
  printf("----------\n");

  printf("El precio final del %s es %.2f \n", name, price + (price * 21 / 100));
  return 0;
}