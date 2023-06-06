/* Problema 15. Convertir dos cadenas de minúsculas a MAYÚSCULAS con la función strupr ().
 * Compáralas y decir si son iguales. */

#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[] = "hola";
    char palabra2[] = "hola";

    // Convirtiendo a mayúsculas
    strupr(palabra1);
    strupr(palabra2);

    if (strcmp(palabra1, palabra2) == 0){
        printf("Ambas cadenas son iguales");
    } else {
        printf("Son diferentes");
    }

    return 0;
}