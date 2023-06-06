// Problema 23. Utilizar la función atof() para pasar una cadena (por ejemplo: "123.45") a un número flotante.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *cad = "123.45";
    float valor;

    valor = atof(cad);  // Convirtiendo el valor de la cadena a flotante.

    printf("Número flotante: %.2f", valor);

    return 0;
}
