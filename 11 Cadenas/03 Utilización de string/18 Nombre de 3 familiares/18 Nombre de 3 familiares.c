/* Problema 18. Pedir el nombre de 3 familiares al usuario (en mayúsculas) y convertir los datos a minúsculas. */

#include <stdio.h>
#include <string.h>

struct familia{
    char nombre[50];
} familiares[3];

int main() {
    for (int i = 0; i < 3; ++i) {
        printf("Digite el nombre del familiar[%i]: ", i+1);
        gets(familiares[i].nombre);
    }

    for (int i = 0; i < 3; ++i) {
        strlwr(familiares[i].nombre);
    }

    for (int i = 0; i < 3; ++i) {
        printf("\nNombre del familiar[%i]: %s", i+1, familiares[i].nombre);
    }
    return 0;
}