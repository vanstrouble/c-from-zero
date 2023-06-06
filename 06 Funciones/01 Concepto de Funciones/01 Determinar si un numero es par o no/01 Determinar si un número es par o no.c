// Problema 1. Determinar si un número es par o no

#include <stdio.h>
void comprobar(int numero);

int main() {

    int numero, x;
    printf("Digite un número: ");
    scanf("%i",&numero);

    comprobar(numero);

    return 0;
}

void comprobar(int numero){
    if (numero % 2 == 0){
        printf("\nEl número es par.");
    } else {
        printf("\nEl número es impar.");
    }
}