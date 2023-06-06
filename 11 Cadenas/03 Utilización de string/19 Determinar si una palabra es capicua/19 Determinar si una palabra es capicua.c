/* Problema 19. Determionar si una palabra es capicua o no.
 *
 * reconocer    somos   anitalavalatina     */

#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[] = "reconocer";
    char palabra2[30];

    strcpy(palabra2, palabra1);

    strrev(palabra2);

    if (strcmp(palabra1, palabra2) == 0){
        printf("Es una palabrta capicua o polindroma");
    } else {
        printf("No es una palabra capicua o polindroma");
    }

    return 0;
}