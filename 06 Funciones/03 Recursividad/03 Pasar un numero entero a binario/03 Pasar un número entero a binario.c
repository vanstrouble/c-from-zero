// Problema 3. Pasar un número entero a binario.

#include <stdio.h>

void binario(int n);

int main() {
    int numero;

    printf("\tCONVERTIR NÚMEROS ENTERO A BINARIOS\n");

    do {
        printf("Digite el número a convertir: ");
        scanf("%i",&numero);
    } while (numero < 0);

    binario(numero);

    return 0;
}
void binario(int n){
    if (n > 1) binario(n / 2);
    printf("%i", n%2);
    }
