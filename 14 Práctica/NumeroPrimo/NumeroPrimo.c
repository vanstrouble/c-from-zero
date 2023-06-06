#include <stdio.h>

int main() {
    int numero, cont = 0;

    printf("Digite un número: ");
    scanf("%i",&numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0){
            cont++;
        }
    }
    if (cont > 2){
        printf("\nEl número %d es compuesto.", numero);
    } else {
        printf("\nEl número %d es primo.", numero);
    }
    return 0;
}
