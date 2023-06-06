/**
 * Impresión de números.
 */

#include <stdio.h>

int main() {
    int cantidad;
    printf("¿Cuántos números quieres evaluar? R: ");
    scanf("%d", &cantidad);

    for (int i = 2; i <= cantidad; i += 2) {
        printf("%d ", i);
    }
    return 0;
}
