/* Problema 6. Hacer un programa que muestre una tabla de multiplicar hasta el 20 de
 * un número cualquiera por pantalla, el número se pedirá en el programa principal.
 * Usar procedimiento. */

#include <stdio.h>
void tabla (int num);

int main() {

    printf("\tTABLA DE MULTIPLICAR");

    int num;
    printf("\nIngresa el número del que quieres su tabla de multiplicar: ");
    scanf("%i",&num);

    tabla(num);

    return 0;
}
void tabla (int num){
    int i, mult;
    for (int i = 1; i <= 20; ++i) {
        mult = num * i;
        printf("\n%i",mult);
    }
}
