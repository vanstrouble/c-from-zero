/* Problema 2: Comprobar si un número digitado por el usuario es positivo o negativo. */

#include <stdio.h>

int main() {

    int numero;

    printf("Digite el número: ");
    scanf("%i",&numero);

    if(numero > 0){
        printf("El número es positivo c:");
    }
    if(numero < 0){
        printf("El número es negativo :c");
    }

    return 0;
}
