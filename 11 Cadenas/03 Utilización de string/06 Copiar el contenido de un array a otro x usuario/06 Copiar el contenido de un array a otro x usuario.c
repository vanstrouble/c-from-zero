/* Problema 6. Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro arreglo de caracteres, y
 * por último, modificar su mensaje poniendo a partir de la posición 10 "Buena broma". */

#include <stdio.h>
#include <string.h>

int main() {
    char cad1[50], cad2[50];
    int i;

    printf("Digite el texto que guste [max 50]: ");
    fgets(cad1, 50, stdin);

    strcpy(cad2, cad1);
    printf("\nTexto copiado: %s\n", cad2);

    i = strlen(cad2);

    if (i < 10){
        strcpy(cad2 + i, "Buena broma");
    } else {
        strcpy(cad2 + 10, "Buena broma");
    }

    printf("Texto modificado: %s", cad2);
    return 0;
}
