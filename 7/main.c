#include <stdio.h>
#include <stdlib.h>

/*
7) Hacer un programa que nos pregunte el primer nombre, y nos salude. Ej: Hola Gaston
*/

#define MAX_STRING_LEN 80

int main()
{
    char nombre[MAX_STRING_LEN]; 
    printf("Nombre:");
    fgets(nombre, MAX_STRING_LEN, stdin); 

    printf("Hola %s \n", nombre);

    return 0;
}
