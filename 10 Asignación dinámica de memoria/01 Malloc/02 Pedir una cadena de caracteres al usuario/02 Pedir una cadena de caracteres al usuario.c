/* Problema 2. Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc para reservar memoria para esa
 * cadena de caracteres (string). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadena[100], *p_cadena;
    int longitud;

    printf("Ingrese el texto: ");
    fgets(cadena, 100, stdin);

    longitud = strlen(cadena);

    p_cadena = malloc((longitud + 1) * sizeof(char));
    strcpy(p_cadena, cadena);

    printf("\n\n\tTexto escrito\n");
    printf("%s", p_cadena);

    printf("\nCaracteres usados: %i", longitud - 1);

    return 0;
}