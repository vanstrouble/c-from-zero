// Problema 1. Utilizar malloc para reservar memoria para un nombre(string)

#include <stdio.h>
#include <stdlib.h>     //Librería para usar malloc
#include <string.h>

int main() {
    char nombre[20], *p_nombre;
    int longitud;

    strcpy(nombre, "Antonio");      //Antonio\0

    longitud = strlen(nombre);

    printf("Caracteres: %i", longitud);

    p_nombre = malloc((longitud + 1)* sizeof(char));

    strcpy(p_nombre, nombre);

    printf("\nNombre: %s", p_nombre);

    return 0;
}
