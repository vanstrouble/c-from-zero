// Determinar si un número es primo o no.

#include <stdio.h>

int main() {

    int i, numero, cont = 0;

    printf("Digite un número: ");
    scanf("%i",&numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0){
            cont++;
        }
    }
    if (cont>2){
        printf("El número es compuesto.");
    } else{
        printf("\nEl número es primo.");
    }

    return 0;
}
