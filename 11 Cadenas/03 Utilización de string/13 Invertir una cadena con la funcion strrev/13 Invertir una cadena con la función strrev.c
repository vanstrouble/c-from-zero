// Problema 13. Invertir una cadena con la función strrev().

#include <stdio.h>
#include <string.h>

int main() {
    char palabra[] = "Antonio";

    strrev(palabra);    //Invertir la palabra . . . hola - aloh

    printf("Palabra invertida: %s", palabra);

    return 0;
}
