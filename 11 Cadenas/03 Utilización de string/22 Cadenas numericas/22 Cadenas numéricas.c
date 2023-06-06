/* Problema 22. Pedir dos cadenas numéricas al usuario, convertirlas a números enteros y sumar los valor para entregar
 * el resultado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena1[10], cadena2[10];
    int valor1, valor2, suma = 0;

    printf("Digite la primer cadena: ");
    fgets(cadena1, 10, stdin);
    printf("Digite la segunda cadena: ");
    fgets(cadena2, 10, stdin);

    valor1 = atoi(cadena1);
    valor2 = atoi(cadena2);

    suma = valor1 + valor2;

    printf("La suma de los valores es: %i", suma);
    return 0;
}
