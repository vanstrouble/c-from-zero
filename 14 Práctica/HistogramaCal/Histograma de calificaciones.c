#include <stdio.h>

int main() {
    /**
     * Desarrollar un programa que permita introducir una serie de calificaciones
     * (entre 0 a 10 de tipo entero) y que permita generar un histograma de frecuencia.
     */
     int histograma[] = {0, 0 ,0 ,0, 0, 0, 0, 0, 0, 0, 0};
     int nValores, calif;

     printf("Digite el número de elementos a procesar: ");
     scanf("%d", &nValores);

    for (int i = 0; i < nValores; ++i) {
        printf("Digite la cal. %d a procesar: ", i + 1);
        scanf("%d", &calif);
        if (calif >= 0 && calif <= 10) {
            histograma[calif]++;
        }
    }

    printf("\nCalificación\t\t\tOcurrencias\n");
    for (int i = 0; i <= 10; ++i) {
        printf("%6d\t\t\t\t%6d\n", i, histograma[i]);
    }

    return 0;
}
