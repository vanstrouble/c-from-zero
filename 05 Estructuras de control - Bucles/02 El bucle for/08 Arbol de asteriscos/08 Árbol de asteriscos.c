/* Hacer un arbol con '*' del tipo:
 * Digite el número de filas. */

#include <stdio.h>

int main() {

    int n, i, j, k;

    printf("Digite el número de filas del árbol: ");
    scanf("%i",&n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++)    //Bucle de espacios
            printf(" ");

        for (int k = 1; k <= (2 * i) - 1; k++)  //Bucle de impresión de asteriscos
            printf("*");
            printf("\n");   //Saltos de línea
        }


    return 0;
}
