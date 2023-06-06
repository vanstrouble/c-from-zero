/* Ingrese un número y calcule e imprima su raíz cuadrada.
 * Si el número es negativo, imprima el número y un mensaje que diga
 * "tiene raíz imaginaría". */

#include <stdio.h>
#include <math.h>

int main() {

    int numero;
    float raiz;

    printf("Digite un número: ");
    scanf("%i",&numero);

    if (numero > 0){
        raiz = sqrt(numero);
        printf("Su raíz cuadrada es: %.2f",raiz);
    } else {
        printf("El número tiene raíz imaginaría.");
        }

    return 0;
}
