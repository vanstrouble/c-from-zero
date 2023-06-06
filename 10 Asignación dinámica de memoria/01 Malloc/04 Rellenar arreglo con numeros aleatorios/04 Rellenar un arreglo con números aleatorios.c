/* Problema 4. Pedir al usuario el número de elementos para un arreglo de números enteros, posteriormente comprobar con
 * malloc si hay memoria suficiente (si el puntero es válido, es decir diferente de NULL), si la hay es entonces
 * rellenar eese arreglo con números aleatorios, si no la hay decir que hay un error en la asignación de memoria. */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

int main(){
    int *p_arreglo, numero_elementos;

    printf("\tNÚMEROS ALEATORIOS\n");

    printf("Digite el número de elementros del arreglo: ");
    scanf("%i", &numero_elementos);

    p_arreglo = malloc(numero_elementos * sizeof(double));

    if (p_arreglo == NULL) {
        printf("Error en la asignación de memoria.");
        return -1;
    } else {
        srand(time(NULL));
        for (int i = 0; i < numero_elementos; ++i) {
            p_arreglo[i] = (1 + rand() % ((numero_elementos + 1) - 1));
            printf("%i. Número: %i \n", i, p_arreglo[i]);
        }
    }

    return 0;
}