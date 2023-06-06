// Lectura de cadenas.

#include <stdio.h>

int main() {
    char palabra[20];

    printf("Digite una palabra: ");
    fgets(palabra, 20, stdin);

    printf("Palabra: %s", palabra);

    return 0;
}
