/* Problema 3. Hacer un programa que muestre un menú con las opciones sumar, restar, multiplicar y dividir,
 * el programa solicitará una opción y realizará la tarea elegida, se debe usar un
 * procedimiento */

#include <stdio.h>

void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {

    menu();

    return 0;
}

void menu(){
    int opc;

    do{
        printf("\n1. Sumar");
        printf("\n2. Restar");
        printf("\n3. Multiplicar");
        printf("\n4. Dividir");
        printf("\n5. Salir");
        printf("\nOpción: ");
        scanf("%i",&opc);

        switch (opc){
            case 1: sumar();
                break;
            case 2:restar();
                break;
            case 3:multiplicar();
                break;
            case 4:dividir();
                break;
        }
    }
    while (opc != 5);
}

void sumar(){

    int n1, n2, suma = 0;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1, &n2);

    suma = n1 + n2;

    printf("\nLa suma es: %i\n",suma);
}

void restar(){

    int n1, n2, resta = 0;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1, &n2);

    resta = n1 - n2;

    printf("\nLa resta es: %i\n",resta);
}

void multiplicar(){

    int n1, n2, mult = 0;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1, &n2);

    mult = n1 * n2;

    printf("\nLa multiplicación es: %i\n",mult);
}

void dividir(){

    int n1, n2, div = 0;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1, &n2);

    div = n1 / n2;

    printf("\nLa división es: %i\n",div);
}