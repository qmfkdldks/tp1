#include <stdio.h>
#include <stdlib.h>

/*
Repita el programa 38, pero esta vez considere sumar el IVA del 21% a cada producto.
La salida en pantalla deberá mostrarse asì:
Yerba = 25$
iva: 21%
cantidad: x
Subtotal: x*25$ (+21%).
……
TOTAL A PAGAR: X$
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

  float quantity[4], total;
  for (size_t i = 0; i < 4; i++)
  {
    printf("Cuantos %s quires? ", products[i].name);
    scanf("%f", &quantity[i]);
    total = total + (products[i].price * quantity[i]);
  }

  printf("------- Loadng -------\n");
  
  for (size_t i = 0; i < 4; i++)
  {
    printf("%s = %.2f\n", products[i].name, products[i].price);
    printf("iva: 21%%\n");
    printf("cantidad: %.1f\n", quantity[i]);
    printf("Subtotal: %.2f (+21%%)\n", quantity[i] * products[i].price);
    printf("……\n");
  }
  float subtotal = (total - (total * 1 / 10));
  printf("TOTAL A PAGAR:  %.2f$\n", +(subtotal) + (subtotal * 21 / 100));

  return 0;
}