#include <stdio.h>

int main() {
    /**
     * Desarrollar un programa que determine los pares e impares de un arreglo
     */
     int nValores;
     printf("Digite el número de valores: ");
     scanf("%d", &nValores);

     int valores[nValores];

    for (int i = 0; i < nValores; ++i) {
        printf("Digite el número %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Impresión de números pares
    printf("\nNúmeros pares: \n");
    for (int i = 0; i < nValores; ++i) {
        if (valores[i] % 2 == 0) {
            printf("%d ", valores[i]);
        }
    }

    printf("\n\nNúmeros impares: \n");
    // Impresión de números impares
    for (int i = 0; i < nValores; ++i) {
        if (valores[i] % 2 != 0) {
            printf("%d ", valores[i]);
        }
    }

    return 0;
}
