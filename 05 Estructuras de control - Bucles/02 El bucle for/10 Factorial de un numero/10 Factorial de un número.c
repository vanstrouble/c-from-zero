// Problema 10. Factorial de un número.

#include <stdio.h>

int main() {

    int i, numero, factorial = 1;

    printf("Digite el número para hallar el factorial: ");
    scanf("%i",&numero);

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    printf("\nEl factorial del número dado es: %i",factorial);

    return 0;
}
