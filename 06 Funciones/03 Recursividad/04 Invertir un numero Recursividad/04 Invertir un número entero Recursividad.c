// Problema 4. Invertir un número entero con recursiviad.

#include <stdio.h>

void invertir(int n);

int main() {

    int numero;

    printf("\tINVERTIR UN NÚMERO ENTERO CON RECURSIVIDAD\n");

    do {
        printf("Digite el número a invertir: ");
        scanf("%i",&numero);
    } while (numero < 0);

    invertir(numero);

    return 0;
}
void invertir(int n){
    printf("%i", n % 10);
    if (n >= 10){
        invertir(n/10);
    }
}