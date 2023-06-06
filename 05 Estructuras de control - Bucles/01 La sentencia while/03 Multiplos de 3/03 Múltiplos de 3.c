// Problema 3. Múltiplos de 3 desde 1 hasta n.

#include <stdio.h>

int main() {

    int n, i;

    printf("Digite el total de números a comprobar: ");
    scanf("%i",&n);

    i = 1;

    while (i <= n){
        if (i % 3 == 0){
            printf("\n%i",i);
        }
        i++;
    }

    return 0;
}
