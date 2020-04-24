#include <stdio.h>
#include <stdlib.h>

/*
Escriba un programa que pregunte por su nombre, su edad y su peso, y que muestre
dicha información en pantalla
*/

int main()
{
  char nombre[15];
  int edad, peso;

  printf("Ingrese su nombre: ");
  fgets(nombre, 15, stdin);

  printf("Ingrese su edad: ");
  scanf("%d", &edad);

  printf("Ingrese su peso: ");
  scanf("%d", &peso);

  printf("\nSu nombre es %s", nombre);
  printf("Su edad es %d \n", edad);
  printf("Su peso es %d \n", peso);
  return 0;
}