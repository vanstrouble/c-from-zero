/* Problema 13. Hacer un programa que imprima la suma de todos los números desde 1
 * hasta n, y diga cuántos números hay. */

#include <stdio.h>

int main() {

    int i, numero, suma_pares = 0, pares = 0;

    printf("Digite el número hasta el que quiere hacer la suma: ");
    scanf("%i",&numero);

    for (int i = 1; i <= numero; ++i) {
        if (i % 2 == 0){
            suma_pares += i;
            pares++;
        }
    }

    printf("\nLa suma de los números pares es: %i",suma_pares);
    printf("\nHay %i números pares dentro.",pares);

    return 0;
}
