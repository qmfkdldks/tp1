#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que solicite por teclado 3 nùmeros (datos enteros) y que lo
mismos sean almacenados en 3 variables diferentes, llamadas a, b, y c,
respectivamente. Se pide que el programa haga lo siguiente:
a) Que el contenido de a pase a ser el doble de c
b) Que el contenido de b pase a ser la suma de a+c
c) Que el contenido de c pase a ser el triple de b.
d) MUESTRE EN PANTALLA TODOS LOS RESULTADOS
*/

int main()
{
  int a, b, c;
  printf("Ingrese a: ");
  scanf("%d", &a);
  printf("Ingrese b: ");
  scanf("%d", &b);
  printf("Ingrese c: ");
  scanf("%d", &c);

  int auxa, auxb;
  auxa = a;
  a = c * 2;
  auxb = b;
  b = auxa + c;
  c = auxb * 3; 

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);

  return 0;
}