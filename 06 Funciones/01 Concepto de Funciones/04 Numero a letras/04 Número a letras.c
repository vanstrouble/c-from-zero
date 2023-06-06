/* Problema 4. Hacer un programa que pida por pantalla un número del 1 al 10
 y mediante un procedimiento muestre por pantalla el número escrito en letras. */

#include <stdio.h>

void letras();

int main() {

    printf("\n\tCONVERTIR UN NÚMERO A LETRAS\n");

    letras();

    return 0;
}

void letras(){

    int numero;

    do {
        printf("\nDigite un número del 1 al 10: ");
        scanf("%i",&numero);

        switch (numero){
            case 1: printf("Uno\n");
                break;
            case 2: printf("Dos\n");
                break;
            case 3: printf("Tres\n");
                break;
            case 4: printf("Cuatro\n");
                break;
            case 5: printf("Cinco\n");
                break;
            case 6: printf("Seis\n");
                break;
            case 7: printf("Siete\n");
                break;
            case 8: printf("Ocho\n");
                break;
            case 9: printf("Nueve\n");
                break;
            case 10: printf("Diez\n");
                break;
        }
    }
    while (numero >= 1 && numero <= 10);
}