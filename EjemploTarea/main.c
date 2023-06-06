#include <stdio.h>

int main() {
    float numero1, numero2, suma = 0, resta = 0, mult = 0, division = 0;

    // printf("Digite el primer número: ");
    scanf("%f", &numero1);
    // printf("Digite el segundo número: ");
    scanf("%f", &numero2);

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    mult = numero1 * numero2;
    division = numero1 / numero2;

    //printf("\nLos resultados son: \nSuma:  %.2f + %.2f = %.2f \nResta: %.2f - %.2f = %.2f \nMult:  %.2f * %.2f = %.2f \nDiv:   %.2f / %.2f = %.2f\n", numero1, numero2, suma, numero1, numero2, resta, numero1, numero2, mult, numero1, numero2, division);

    printf("\n+ %.2f", suma);
    printf("\n- %.2f", resta);
    printf("\n/ %.2f", division);
    printf("\n* %.2f", mult);
    return 0;
}
