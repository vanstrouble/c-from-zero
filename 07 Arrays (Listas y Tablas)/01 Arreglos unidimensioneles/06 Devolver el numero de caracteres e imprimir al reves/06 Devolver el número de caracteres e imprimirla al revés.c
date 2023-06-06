/* Problema 6. Realizar un programa que permita leer una cadena de caracteres y que devuelva el número de caracteres
 * que tiene dicha cadena e imprima dicha cadena al revés. */

#include <stdio.h>
#include <string.h>

int main() {

    char cadena[30];
    int cont = 0;

    printf("Digite lo que quiera leer al revés: ");
    gets(cadena);

    while (cadena[cont] != '\0'){
        cont++;
    }
    printf("\nLa cadena tiene: %i caracteres", cont);
    printf("\nLa palabra escrita al reves es: ");
    while (cont >= 0){
        printf("%c", cadena[cont--]);
    }

    return 0;
}