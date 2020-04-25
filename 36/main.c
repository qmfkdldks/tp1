#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/*
Haga un programa que permita mostrar en pantalla un numero aleatorio comprendido
entre 0 y 100. ➔ función srand()
*/

int main()
{
  srand(time(0));
  printf("%d\n", rand() % 100);

  return 0;
}