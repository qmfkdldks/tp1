#include <stdio.h>
#include <stdlib.h>

/*
Hacer un Programa que permita calcular las raíces de una función cuadrática (X1 y X2).
Los valores de a, b y c deberán ser ingresados por teclado.
*/

int main()
{
    float a, b, c, root1, root2;
    printf(" a: ");
    scanf("%f", a);
    printf(" b: ");
    scanf("%f", b);
    printf(" c: ");
    scanf("%f", c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }



    root1 
    printf("Ud. Ingreso: %c-%c-%c \n", inciales[0], inciales[1], inciales[2]);
    return 0;
}
