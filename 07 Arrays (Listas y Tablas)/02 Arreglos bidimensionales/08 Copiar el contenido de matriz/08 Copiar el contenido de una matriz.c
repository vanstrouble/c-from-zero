/* Problema 8. Hacer una matrriz de tipo entera de 2*2, llenarla de números y luego copiar todo su contenido hacia
 * otra matriz. */

#include <stdio.h>
#include <string.h>

int main() {

    int matriz1[2][2], matriz2[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Digite un número para matriz[%i][%i]: ", i + 1, j + 1);
            scanf("%i", &matriz1[i][j]);
            matriz2[i][j] = matriz1[i][j];
        }
    }
    printf("\nLa matriz copiada es: \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%i\t", matriz2[i][j]);
        }
        printf("\n");
    }
    return 0;
}