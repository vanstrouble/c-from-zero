/* Problema 8. Reservar memoria para un arreglo de 5 números, rellenarlo con números que digite el usuario, luego
 * utilizar realloc para ampliar ese arreglo a 10 números y agregar 5 números más; por último, imprimir el arreglo
 * resultante de 10 números. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros, *ampliacion;

    numeros = malloc(5 * sizeof(int));

    printf("Ingrese 5 numeros: \n");
    for(int i = 0; i < 5; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%i", &numeros[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%i ", numeros[i]);
    }
    printf("\n");

    ampliacion = realloc(numeros, 10* sizeof(int));

    printf("\nIngrese otros 5 numeros: \n");
    for(int i = 5; i < 10; i++){
        printf("Digite numero %i: ", i+1);
        scanf("%i", &ampliacion[i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%i ", ampliacion[i]);
    }

    free(ampliacion);
    return 0;
}
