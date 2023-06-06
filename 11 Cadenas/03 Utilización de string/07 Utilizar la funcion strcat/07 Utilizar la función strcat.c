// Problema 7. Utilizar la función strcat() para añadir un texto a un string.

#include <stdio.h>
#include <string.h>

int main() {
    char cad[] = "Hola qué tal?";

    strcat(cad, " Mi nombre es Pedro");

    // cad = Hola qué tal? Mi nombre es Pedro.

    printf("%s", cad);


    return 0;
}
