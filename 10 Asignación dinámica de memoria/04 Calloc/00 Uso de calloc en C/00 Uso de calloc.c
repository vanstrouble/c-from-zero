// Función calloc()

//      puntero = calloc(numero de elementos, tamaño de cada elemento);

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p1;

    p1 = calloc(5, sizeof(int));

    for (int i = 0; i < 5; ++i) {
        printf("Digite un número: ");
        scanf("%i", &p1[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; ++i) {
        printf("%i ", p1[i]);
    }

    return 0;
}
