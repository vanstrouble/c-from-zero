/* Arreglos Bidimensionales (Matrices)
 *
 *      - Matrices de enteros.
 *      - Matrices de flotantes.
 *      - Matrices de caracteres.
 */

#include <stdio.h>


// Matriz de enteros
/*
int main() {

    int matriz[2][3] = {{51,52,53},{54,55,56}};
    int filas, columnas;

    for (int filas = 0; filas < 2; ++filas) {
        for (int columnas = 0; columnas < 3; ++columnas) {
            printf("%i\t", matriz[filas][columnas]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
// Matriz de flotantes

int main() {

    float matriz[2][3];
    int i, j;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Digite un número matriz[%i][%i]: ", i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%.2f\t",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 */

// Matriz de caracteres

int main() {

    char matriz[2][3] = {{'a','b','c'},{'d','e','f'}};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%c\t",matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}