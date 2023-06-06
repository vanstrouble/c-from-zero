/* Problema 5. Dado un vector de 10 elementos  = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, escribir un programa en C (haciendo
 * uso de punteros) que muestre las direcciones de memoria de cada elemento. */

#include <stdio.h>

int main() {

    int n[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
    int *p_n;

    p_n = n;    //p_n = n[0]

    for (int i = 0; i < 10; ++i) {
        printf("Dato n[%i]: %i", i, *p_n);
        printf("\nPosición: %p", p_n);
        printf("\n\n");
        p_n++;
    }

    return 0;
}