/* Problema 3. Reservar memoria con malloc para un arreglo de tipo double para 1000 números y comprobar si el puntero
 * es válido (si el puntero devuelve NULL, significa que no hay suficiente memoria). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOPE 1000

int main() {
    double *p_arreglo;

    p_arreglo = malloc(TOPE * sizeof(double));

    if (p_arreglo == NULL){
        printf("Error en la asignación de memoria.");
        return -1;      // Intentar recuperar memoria
    } else {
        srand(time(NULL));
        for (int i = 0; i < TOPE; ++i) {
            p_arreglo[i] = 1 + rand() % ((TOPE + 1) - 1);
            printf("%lf. \n", p_arreglo[i]);
        }
    }
    return 0;
}