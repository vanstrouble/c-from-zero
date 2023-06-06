/*
 * Elaborar un programa que permita generar la suma desde 1 hasta un número que se introduzca
 */

#include <stdio.h>

int main() {
    int cantidad, suma = 0;
    printf("¿Hasta qué número quieres sumar? R: ");
    scanf("%d", &cantidad);

    suma = ((1 + cantidad) * cantidad) / 2; // Sumatoria

    printf("La suma es: %d", suma);
    return 0;
}
