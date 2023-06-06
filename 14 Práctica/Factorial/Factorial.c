#include <stdio.h>
#include "math.h"

int main() {
    int i, numero, factorial = 1;

    printf("Digite el número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }
    printf("\n!%d = %d", numero, factorial);
    return 0;
}

