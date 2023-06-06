#include <stdio.h>

typedef struct {
    float numerador;
    float denomidador;
} Fraccion;

int main() {
    Fraccion fracc1;
    Fraccion fracc2;
    Fraccion suma;
    Fraccion resta;

    printf("Ingrese datos de la fracción 1\n");
    printf("Digite numerador: ");
    scanf("%f", &fracc1.numerador);
    printf("Digite denominador: ");
    scanf("%f", &fracc1.denomidador);

    printf("\nIngrese datos de la fracción 2\n");
    printf("Digite numerador: ");
    scanf("%f", &fracc2.numerador);
    printf("Digite denominador: ");
    scanf("%f", &fracc2.denomidador);

    suma.denomidador = fracc1.denomidador * fracc2.denomidador;
    suma.numerador = fracc1.numerador * fracc2.denomidador + fracc1.denomidador * fracc2.numerador;

    resta.numerador = fracc1.numerador * fracc2.denomidador - fracc1.denomidador * fracc2.numerador;
    resta.denomidador = fracc1.denomidador * fracc2.denomidador;

    printf("La suma de %.2f/%.2f + %.2f/%.2f es %.2f/%.2f\n", fracc1.numerador, fracc1.denomidador, fracc2.numerador, fracc2.denomidador, suma.numerador, suma.denomidador);
    printf("La resta de %.2f/%.2f + %.2f/%.2f es %.2f/%.2f\n", fracc1.numerador, fracc1.denomidador, fracc2.numerador, fracc2.denomidador, resta.numerador, resta.denomidador);

    return 0;
}
