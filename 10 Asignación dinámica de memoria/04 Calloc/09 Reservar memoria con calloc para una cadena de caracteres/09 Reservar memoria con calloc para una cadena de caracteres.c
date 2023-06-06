// Problema 9. Reservar memoria con calloc para una cadena de caracteres.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *c, palabra[50];

    printf("Digite una palabra (String): ");
    fgets(palabra, 50, stdin);

    // palabra\0

    c = calloc(strlen(palabra) + 1, sizeof(char));

    strcpy(c, palabra);

    printf("Palabra: %s", c);


    return 0;
}
