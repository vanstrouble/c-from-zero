/* Problema 5. Copiar la cadena de caracteres "Hola mundo" de un array a otro. Luego cambiar la palabra "mundo" por
 * "y bienvenido al lenguaje C". */

// Hola y bienvenido al lengiaje C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cad1[] = "Hola mundo";
    char cad2[30];

    strcpy(cad2, cad1); // Copiando el contenido de cad1 hacía cad2

    strcpy(cad2 + 5, "y bienvenido al lenguaje C"); // Se sustituye a partir del Hola
    // Hola mundo y bienvenido al lenguaje C

    printf("%s", cad2);

    system("pause");
    return 0;
}