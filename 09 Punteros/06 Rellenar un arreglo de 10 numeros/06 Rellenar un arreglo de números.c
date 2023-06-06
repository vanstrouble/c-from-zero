/* Problema 6. Rellenar un arreglo de 10 números, posteriormente utilizando punteros, indicar cuáles son números pares
 * y su posición en memoria. */

#include <stdio.h>

int main(){
    int numero_elementos;
    int *p_numero;

    printf("Digite el número de elementos del arreglo: ");
    scanf("%i", &numero_elementos);

    printf("\n\tRellene el arreglo\n");

    int arreglo[numero_elementos];

    p_numero = arreglo;

    for (int i = 0; i < numero_elementos; ++i) {
        printf("Digite el numero del arreglo[%i]: ", i);
        scanf("%i", &arreglo[i]);
    }

    for (int i = 0; i < numero_elementos; ++i) {
        if (*p_numero % 2 == 0){
            printf("\nArreglo[%i] con el número %i: es PAR", i, *p_numero);
            printf("\nPosición en memoria: %p", p_numero);
            printf("\n\n");
        }
        p_numero++;
    }

    return 0;
}