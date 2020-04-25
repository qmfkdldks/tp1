#include <stdio.h>
#include <stdlib.h>

/*
Se conocen los siguientes datos:
Yerba = 65$
Azucar = 25$
Kg de Pan = 28$
Gaseosa = 24$
Se pide que elabore un programa de forma tal que se ingresen por teclado las
cantidades de cada producto, y al final, muestre cuando se debe pagar en total (en
función de las cantidades que se desean comprar). Considere que los productos tienen
precio fijo y son constantes.
*/

struct Product
{
  char name[10];
  int price;
};

int main()
{
  struct Product products[4] = {{"Yerba", 65},
                                {"Azucar", 25},
                                {"Kg de Pan", 28},
                                {"Gaseosa", 24}};

  int quantity, total;
  for (size_t i = 0; i < 4; i++)
  {
    printf("Cuantos %s quires? ", products[i].name);
    scanf("%d", &quantity);
    total = total + (products[i].price * quantity);
  }

  printf("El total a pagar: %d \n", total);

  return 0;
}