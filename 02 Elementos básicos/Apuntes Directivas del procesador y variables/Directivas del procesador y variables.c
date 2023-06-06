//Directivas del Procesador y Variables

#include <stdio.h>  //Librería

#define PI 3.1416   //Maacro

int y = 5;  //Variable global

int main() {

    int x = 10; //Variable local
    float suma = 0;

    suma = PI + x;

    printf("La suma es: %.2f",suma);

    return 0;
}
