/* Problema 8. Pedir una cadena al usuario, posteriormente utilizar la función strcat() para añadir la frase: "Que
 * tengas un buen día." al final de la cadena. */

#include <stdio.h>
#include <string.h>

int main() {
    char cad[50];

    printf("Introduzca un texto: ");
    gets(cad);

    strcat(cad, ", que tengas un buen día.");

    printf("%s", cad);

    return 0;
}
