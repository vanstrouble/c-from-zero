#include <stdio.h>

int main() {
    int numero1, numero2, cont = 0;

    printf("Ingrese el rango…\n");
    printf("Digite el primer número: ");
    scanf("%i",&numero1);
    printf("Digite el segundo número: ");
    scanf("%i",&numero2);

    for (int i = numero1; i <= numero2; i++) {
        int div = 0;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0){
                if (i % j == 0) {
                    div++;
                }
            }
        }
        if (div == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
