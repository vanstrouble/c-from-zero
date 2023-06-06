/* Recursividad: Una función recursiva es una función que se llama a
si misma.
	1. Caso Base.
	2. Caso Recursivo.
*/

// Factorial

// -> 1 = 1    ... 1<n 1*2*3...n

#include <stdio.h>

long factorial(int n);

int main() {

    printf("\tFACTORIAL DE UN NÚMERO\n");

    int numero;

    printf("Digite un número: ");
    scanf("%i",&numero);

    printf("\nEl factorial del número es: %li",factorial(numero));

    return 0;
}

long factorial(int n){
    if (n <= 1){
        return 1;
    }
    else {
        return (n * factorial(n - 1));
    }
}