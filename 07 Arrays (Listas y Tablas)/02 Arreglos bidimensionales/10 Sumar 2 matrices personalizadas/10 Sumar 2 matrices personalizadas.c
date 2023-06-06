/* Problema 10. Sumar 2 matrices, pidiendo al usuario el número de filas y columnas y además los elementos de cada
 * matriz, luego moestrar el resultado. */

#include <stdio.h>

void sumar (int numerofilas, int numerocolumnas, int a[numerofilas][numerocolumnas], int b[numerofilas][numerocolumnas]);

int main() {

    int numerofilas, numerocolumnas;

    printf("\n\tS U M A  \tD E  \tM A T R I C E S\n\n");

    printf("Digite el número de FILAS que necesite: ");
    scanf("%i",&numerofilas);
    printf("Digitel el número de COLUMNAS que necesite: ");
    scanf("%i",&numerocolumnas);

    printf("\n");

    int matriz1[numerofilas][numerocolumnas];
    int matriz2[numerofilas][numerocolumnas];

    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            printf("Digite el numero de la MATRIZ 1 en la posición [%i][%i]: ", i + 1, j + 1);
            scanf("%i",&matriz1[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            printf("Digite el numero de la MATRIZ 2 en la posición [%i][%i]: ", i + 1, j + 1);
            scanf("%i",&matriz2[i][j]);
        }
    }

    printf("\n");
    sumar(numerofilas, numerocolumnas, matriz1,matriz2);

    return 0;
}
void sumar (int numerofilas, int numerocolumnas, int a[numerofilas][numerocolumnas], int b[numerofilas][numerocolumnas]){
    int suma[numerofilas][numerocolumnas];

    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            suma[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < numerofilas; ++i) {
        for (int j = 0; j < numerocolumnas; ++j) {
            printf("%i\t",suma[i][j]);
        }
        printf("\n");
    }
}