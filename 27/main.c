#include <stdio.h>
#include <stdlib.h>

/*
Un cierto comercio, vende productos y aplica un 10% de descuento. Escriba un
programa que permita el ingreso del producto, su valor y que muestre en pantalla, el
precio de lista, el 10% de dicho valor y el precio final con el descuento incluído.
*/

int main()
{
  char names[3][10];
  float prices[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Ingrese el nombre: ");
    scanf("%s", names[i]);
    printf("Ingrese el precio: ");
    scanf("%f", &prices[i]);
    printf("----------\n");
  }

  for (size_t i = 0; i < 3; i++)
  {
    printf("Nombre: %s Subtotal: %.2f 10%% del precio: %.2f Total: %.2f \n", names[i], prices[i], (prices[i] * 1 / 10), prices[i] - (prices[i] * 1 / 10));
  }

  return 0;
}