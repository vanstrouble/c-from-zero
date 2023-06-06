/* Problema 7. Resewrvar memoria dinámica para una cadena de caracteres de 10 espacios, luego utilizar realloc para
 * ampliar la memoria dinámica a 30 espacios. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p_nombre, *p_NombreCompleto;

    p_nombre = malloc(10 * sizeof(char));

    strcpy(p_nombre, "Pedro");

    printf("Nombre: %s", p_nombre);

    // Ampliando la cadena de caracteres a 30 espacios

    p_NombreCompleto = realloc(p_nombre, 30 * sizeof(char));

    strcat(p_NombreCompleto, " Antonio Vázquez"); // Pedro Antonio Vázquez González

    printf("\nNombre Completo: %s", p_NombreCompleto);

    free(p_NombreCompleto);

    return 0;
}
