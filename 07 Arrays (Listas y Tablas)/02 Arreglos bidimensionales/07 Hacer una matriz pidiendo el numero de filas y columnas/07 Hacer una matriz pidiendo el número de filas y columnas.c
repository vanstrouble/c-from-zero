/* Problema 7. Hacer una matriz de tipo entera preguntándole al usuario el número de filas y columnas, rellenar la
 * matriz y luego mostrarla en pantalla. */

#include <stdio.h>

int main() {

    int numerofilas, numerocolumnas;

    printf("Digite el tamño de la matriz (FILAS): ");
    scanf("%i", &numerofilas);
    printf("Digite el tamño de la matriz (COLUMNAS): ");
    scanf("%i", &numerocolumnas);

    int matriz[numerofilas][numerocolumnas];

    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            printf("\nDigite un número para matriz[%i][%i]: ", i+1,j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("\n\n");

    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
