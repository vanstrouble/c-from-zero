#include <stdio.h>
#include <math.h>

int main() {
    int aprox;
    float pi = 2;
    printf("Digite el número de aproximación: ");
    scanf("%d", &aprox);

    for (int i = 1; i <= aprox; ++i) {
        float valork = 2 * i;
        float valor = (valork * valork) / ((valork - 1) * (valork + 1));
        pi += valor;
    }

    printf("Valor PI aprox = %f", pi);

    return 0;
}
