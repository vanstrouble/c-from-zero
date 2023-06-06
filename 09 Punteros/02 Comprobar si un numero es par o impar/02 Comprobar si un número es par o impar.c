/* Problema 2. Comprobar si un número es par o impar y señalar la posición de memoria donde se está guardando el número.
 * Con punteros. */

void IngresoNumero (int *p_numero);
void ParImpar (int *p_numero);

#include <stdio.h>

int main() {
    int numero, *p_numero = &numero;

    printf("\t\tP A R   O    I M P A R   (CON PUNTEROS)\n\n");

    IngresoNumero(p_numero);
    ParImpar(p_numero);


    return 0;
}
void IngresoNumero (int *p_numero){
    printf("Digite un número: ");
    scanf("%i", p_numero);
}
void ParImpar (int *p_numero){
    if (*p_numero % 2 == 0){
        printf("El número %i es PAR.", *p_numero);
        printf("\nPosición: %p", p_numero);
    } else {
        printf("El número %i es IMPAR.", *p_numero);
        printf("\nPosición: %p", p_numero);
    }
}