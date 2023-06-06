#include <stdio.h>

int main() {
    /**
     * Hacer un programa que dadas el número de alumnos y calificaciones, se calcule el
     * promedio y muestre en orden los promedios.
     */
    int nAlumnos = 0, nCalificaciones = 0;
    float suma, promedio, aux;

    printf("Digite el número de alumnos: ");
    scanf("%d", &nAlumnos);
    printf("Digite el número de calificaciones: ");
    scanf("%d", &nCalificaciones);

    float matriz[nAlumnos][nCalificaciones];
    float promedios[nAlumnos];

    printf("\nIngrese las calificaciones…\n");
    for (int i = 0; i < nAlumnos; ++i) {
        for (int j = 0; j < nCalificaciones; ++j) {
            printf("Digite la %d calificación del alumno %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]);
        }
        printf("\n");
    }

    // printf("\nPromedio de calificaciones");
    for (int i = 0; i < nAlumnos; ++i) {
        suma = 0;
        // promedio = 0;
        for (int j = 0; j < nCalificaciones; ++j) {
            suma += matriz[i][j];
            promedio = (float) (suma / nCalificaciones);
            promedios[i] = promedio;
        }
        // printf("\nEl promedio del alumno %d es: %.2f", i + 1, promedio);
    }

    printf("\nOrdenando el arreglo. Por favor espere…\n");
    for (int i = 0; i < nAlumnos - 1; ++i) {
        for (int j = 0; j < nAlumnos - 1; ++j) {
            if (promedios[j] > promedios[j + 1]) {
                aux = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = aux;
            }
        }
    }

    printf("\nPromedios de forma ascendente\n");
    for (int i = 0; i < nAlumnos; ++i) {
        printf("%.1f\n", promedios[i]);
    }

    printf("\n");
    return 0;
}
