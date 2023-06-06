//Encontrar la media geométrica de 3 números.

#include <stdio.h>
#include <math.h>

int main() {

    float n1, n2, n3, mult, media;

    printf("Digite los tres valores: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    mult = n1 * n2 * n3;

    media = cbrt(mult);

    printf("\nLa media geométrica es: %.3f",media);


    return 0;
}
