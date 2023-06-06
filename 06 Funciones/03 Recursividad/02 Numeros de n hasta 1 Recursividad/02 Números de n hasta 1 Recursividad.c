/* Problema 2. Consideremos una función que recibe un número n e imprime los números
 * del n al 1. Con recursividad. */

#include <stdio.h>
int regreso(int n);


int main() {

    int numero;

    printf("\tNÚMEROS DE n HASTA 1\n");

    printf("Digite un número: ");
    scanf("%i",&numero);

    for (int i = numero; i > 0; --i) {
        printf("%i.\n",regreso(i));
    }

    return 0;
}
int regreso(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    else {
        return regreso(n -1) +1;
    }
}