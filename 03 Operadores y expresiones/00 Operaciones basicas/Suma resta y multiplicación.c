//Programa que calcule la suma, resta y multiplicación de dos números

#include <stdio.h>

int main() {

    float n1, n2;
    float suma, resta, mult;

    printf("Ingrese un número\n");
    scanf("%f",&n1);

    printf("Ingrese un segundo número\n");
    scanf("%f",&n2);

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;

    printf("La suma de los números es: %2.f\n",suma);
    printf("La resta de los números es: %2.f\n",resta);
    printf("La multiplicación de los números es: %2.f\n",mult);


    return 0;
}
