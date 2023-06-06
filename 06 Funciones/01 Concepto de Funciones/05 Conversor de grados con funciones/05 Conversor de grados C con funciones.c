/*Problema 5. Hacer un programa que pida por pantalla una temperatura en grados Celsius,
 * muestre un menú para convertirlos a Fahrenheit o Kelvin y muestre el equivalente por
 * pantalla, utilizar funciones.
 *
 * Celsius a Fahrenheit:
 *      F = (9*C)/5 + 32;
 *
 * Celsius a Kelvin:
 *      K = C + 273.15;
 */

#include <stdio.h>
float fahrenheit(float C);
float kelvin(float C);

int main() {

    int opc;
    float C, F = 0,K = 0;

    printf("\n\tCONVERSOR DE GRADOS CELSIUS\n");

    printf("\nDigite el valor de los grados Celsius: ");
    scanf("%F",&C);

    do {
        printf("\n1. Convertir a grados Fahrenheit");
        printf("\n2. Convertir a grados Kelvin");
        printf("\n3. Salir");
        printf("\n\nOpción: ");

        scanf("%i",&opc);

        switch (opc){
            case 1: F = fahrenheit(C);
            printf("\nEl equivalente en grados Fahrenheit es: %.2f",F);
                break;
            case 2: K = kelvin(C);
            printf("\nEl equivalente en grados Kelvin es: %.2f",K);
                break;
        }

    } while (opc != 3);

    return 0;
}

float fahrenheit(float C){
    float F = 0;
    F = (9*C)/5 + 32;
    return F;
}
float kelvin(float C){
    float K = 0;
    K = C + 273.15;
    return K;
}