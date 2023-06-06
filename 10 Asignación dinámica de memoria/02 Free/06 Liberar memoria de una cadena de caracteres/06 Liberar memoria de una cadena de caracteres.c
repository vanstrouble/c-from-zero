/* Problema 6. Pedir al usuario una cadena de caracteres, reservar memoria con malloc(), almacenarlo en la memoria
 * dinámica, posteriormente utilizar free() para liberar el espacio de memoria dinámica utilizado. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadena[100], *p_cadena;

    printf("Escriba algo: ");
    fgets(cadena, 100, stdin);

    p_cadena = malloc((strlen(cadena) + 1)* sizeof(char));
    strcpy(p_cadena, cadena);

    printf("\n%s", p_cadena);

    free(p_cadena);

    printf("\n%s", p_cadena);

    return 0;
}
