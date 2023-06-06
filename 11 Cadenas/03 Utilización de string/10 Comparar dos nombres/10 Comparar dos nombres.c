// Problema 10. Pedir 2 nombres al usuario y comparar si son iguales o no.

#include <stdio.h>
#include <string.h>

int main() {
    char nombre1[30], nombre2[30];

    printf("Digite el primer nombre: ");
    fgets(nombre1, 30, stdin);
    printf("Digite el segundo nombre: ");
    fgets(nombre2, 30, stdin);

    if (strcmp(nombre1, nombre2) == 0){
        printf("\nLos nombres son iguales.");
    } else {
        printf("\nLos nombres son diferentes.");
    }
    return 0;
}