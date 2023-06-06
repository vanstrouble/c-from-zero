// Problema 21. Convertir una cadena (por ejemplo: "1234") a un número entero con la función atoi().

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cad = "34";
    int valor;

    valor = atoi(cad); // Convertir la cadena a un número entero.

    printf("Número entero: %i", valor);

    return 0;
}
