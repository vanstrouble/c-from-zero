#include <stdio.h>

int main() {
    /**
     * Promedio de calificaciones
     */
     int nAlumnos = 0, nCalificaciones = 0;
     float suma, promedio;

     printf("Digite el número de alumnos: ");
     scanf("%d", &nAlumnos);
     printf("Digite el número de calificaciones: ");
     scanf("%d", &nCalificaciones);

     float matriz[nAlumnos][nCalificaciones];

     printf("\nIngrese las calificaciones…\n");
    for (int i = 0; i < nAlumnos; ++i) {
        for (int j = 0; j < nCalificaciones; ++j) {
            printf("Digite la %d calificación del alumno %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nPromedio de calificaciones");
    for (int i = 0; i < nAlumnos; ++i) {
        suma = 0;
        promedio = 0;
        for (int j = 0; j < nCalificaciones; ++j) {
            suma += matriz[i][j];
            promedio = (float) (suma / nCalificaciones);
        }
        printf("\nEl promedio del alumno %d es: %.2f", i + 1, promedio);
    }
    printf("\n");

    return 0;
}
