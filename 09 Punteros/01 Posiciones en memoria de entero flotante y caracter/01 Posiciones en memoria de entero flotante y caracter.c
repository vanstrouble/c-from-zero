/* Problema 1. Hacer una variable de tipo int, otra de tipo float y por último una de tipo char, almacenar datos en
 * cada una de las variables, posteriormente indicar la posición de memoria donde se encuentran guardados los datos de
 * cada variable. Con punteros. */

#include <stdio.h>

int main() {
    int n = 10, *p_n = &n;
    float n2 = 10.5, *p_n2 = &n2;
    char n3 = 'a', *p_n3 = &n3;

    printf("Variable entera\n");
    printf("Dato: %i", *p_n);   //Dato de la variable
    printf("\nPosición: %p",p_n);   //Posición de la memoria exacta.

    printf("\n\nVariable flotante\n");
    printf("Dato: %.2f", *p_n2);
    printf("\nPosición: %p", p_n2);

    printf("\n\nVariable caracter\n");
    printf("Dato: %c", *p_n3);
    printf("\nPosición: %p", p_n3);

    return 0;
}
