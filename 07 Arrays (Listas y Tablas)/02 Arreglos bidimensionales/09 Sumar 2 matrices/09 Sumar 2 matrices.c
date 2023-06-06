// Problema 9. Sumar 2 matrices.

#include <stdio.h>
void sumar (int a[2][2], int b[2][2]);

int main() {

    int matriz1[2][2] = {{2,1},{1,2}}, matriz2[2][2] = {{1,2},{2,1}};

    sumar(matriz1,matriz2);

    return 0;
}
void sumar (int a[2][2], int b[2][2]) {
    int suma[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            suma[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%i ", suma[i][j]);
        }
        printf("\n");
    }
}