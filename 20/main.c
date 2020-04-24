#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Escriba el mismo programa anterior, pero utilizando la función POW. Para este
ejercicio, en pantalla se deberá mostrar lo siguiente:
CALCULA EL CUADRADO Y EL CUBO DE UN NRO USANDO LA FUNCION POW
Ingrese Valor: X
El Nro: X elevado al cuadrado es: Y
El Nro: X elevado al cubo es: Z
*/

int main()
{
  double number;

  printf("CALCULA EL CUADRADO Y EL CUBO DE UN NRO USANDO LA FUNCION POW\n");
  printf("-----------------------------------------\n");
  printf("Ingrese Valor: ");
  scanf("%lf", &number);

  printf("El Nro: X elevado al cuadrado es: %.2f \n", pow(number, 2));
  printf("El Nro: X elevado al cubo es: %.2f \n", pow(number, 3));
  return 0;
}