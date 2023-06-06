/* Problema 10. Hacer un puntero array de tipo float, pedir al usuario el numero de elementos, luego reservar memoria
 * dinámica con calloc, llenar el array, imprimir todos los elementos y por último, liberar el espacio de memoria
 * dinámica utilizado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *array;
    int numero_elementos;

    printf("Ingrese el número de elementos: ");
    scanf("%i", &numero_elementos);

    array = calloc(numero_elementos, sizeof(float));

    for (int i = 0; i < numero_elementos; ++i) {
        printf("Digite el número %i: ", i + 1);
        scanf("%f", &array[i]);
    }

    printf("\n");

    for (int i = 0; i < numero_elementos; ++i) {
        printf("%.2f\n", array[i]);
    }

    free(array);

    return 0;
}
