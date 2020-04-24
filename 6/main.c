#include <stdio.h>
#include <stdlib.h>

/*
 Hacer un programa que nos pregunte el año de nacimiento, el año actual,
  y nos calcule nuestra edad.
*/

int main()
{
    int nacimiento, actual;
    printf("El año del nacimiento:");
    scanf("%d", &nacimiento);
    printf("El año actual:");
    scanf("%d", &actual);

    printf("Edad: %d \n", actual - nacimiento);

    return 0;
}
