/* Dadas las horas trabajadas de una personay el valor por hora.
 * Calcular su salario mínimo. */

#include <stdio.h>

int main() {

    float salario, salario_minimo;
    int horas_trabajadas;

    printf("Ingrese el salario: "); scanf("%f",&salario);
    printf("Ingrese la cantidad de horas trabajadas: "); scanf("%d",&horas_trabajadas);

    salario_minimo = horas_trabajadas * salario;

    printf("\nLo que debe de pagarse es la cantidad de: $%.1f",salario_minimo);

    return 0;
}
