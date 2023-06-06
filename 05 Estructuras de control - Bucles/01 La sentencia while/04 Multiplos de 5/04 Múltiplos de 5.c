// Problema 4. Múltiplos de 5 desde 1 hasta n.

#include <stdio.h>

int main() {

    int n, i;

    printf("Digite el total de números a comprobar: ");
    scanf("%i",&n);

    i = 1;

    while (i <= n){
        if (i % 5 == 0){
            printf("\n%i",i);
        }
        i++;
    }

    return 0;
}
