/* Problema 24. Pedir dos cadenas (con número flotante) al usuario, posteriormente multiplicar dichos números y mostrar
 * su resultado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char cad1[10], cad2[10];
    float valor1, valor2, mult = 0;

    printf("Digite la primer cadena: ");
    fgets(cad1, 10, stdin);
    printf("Digite la segunda cadena: ");
    fgets(cad2, 10, stdin);

    valor1 = atof(cad1);
    valor2 = atof(cad2);

    mult = valor1 * valor2;

    printf("\nEl resultado de la multiplicación de la cadena es: %.2f", mult);
    return 0;
}