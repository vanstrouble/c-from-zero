#include <stdio.h>

int main() {
    /**
     * Programa para depositar dinero
     * Si la cantidad depositada es más de 1000, entonces le agregas 10% de la misma
     */

    float cantidad = 0;

    printf("Digite la cantidad a ingresar: ");
    scanf("%f", &cantidad);

    if (cantidad > 1000) {
        cantidad = (float) (cantidad + (cantidad * 0.10));
    }
    printf("La cantidad depositada es %.2f", cantidad);
    return 0;
}
