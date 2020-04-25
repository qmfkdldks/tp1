#include <stdio.h>
#include <stdlib.h>

/*
Modifique el programa anterior, pero esta vez aplique un descuento del 10% si paga
de contado. El programa deberá mostrar el total a abonar, y el total con descuento si
fuera de contado.
*/

struct Product
{
  char name[10];
  float price;
};

int main()
{
  struct Product products[4] = {{"Yerba", 65},
                                {"Azucar", 25},
                                {"Kg de Pan", 28},
                                {"Gaseosa", 24}};

  float quantity, total;
  for (size_t i = 0; i < 4; i++)
  {
    printf("Cuantos %s quires? ", products[i].name);
    scanf("%f", &quantity);
    total = total + (products[i].price * quantity);
  }

  printf("El total a pagar sin descuento: %.2f \n", total);
  printf("El total a pagar con descuento: %.2f \n", total - (total * 1 / 10));

  return 0;
}