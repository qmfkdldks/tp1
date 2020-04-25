#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que calcule la velocidad de un proyectil que recorre x Km en t
minutos. Expresar el resultado en metros/segundo.
Velocidad = espacio/tiempo
*/

#define interest 2.5

int main()
{
  float km, minutes;

  printf("Ingrese la distancia que recorrio en km: ");
  scanf("%f", &km);

  printf("Ingrese cunatos minutos tardo: ");
  scanf("%f", &minutes);
  printf("----------\n");

  printf("En metros/segundo es: %.2f/%.2f \n", km * 1000, minutes * 60);
  return 0;
}