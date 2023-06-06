/* Problema 4. Determinar si un número es primo o no con punbteros y además indicar en qué posición de memoria se
 * guardó el número. */

#include <stdio.h>

void IngresarDato (int *p_numero);
void PrimoNoPrimo (int *p_numero);

int main() {
    int numero, *p_numero = &numero;

    printf("\t\tNÚMERO PRIMO CON PUNTEROS\n\n");

    IngresarDato(p_numero);
    PrimoNoPrimo(p_numero);

    return 0;
}
void IngresarDato (int *p_numero){
    printf("Ingrese un número: ");
    scanf("%i", p_numero);
}
void PrimoNoPrimo (int *p_numero){
    int cont = 0;
    for (int i = 1; i <= *p_numero; ++i) {
        if (*p_numero % i == 0){
            cont++;
        }
    }
    if (cont > 2){
        printf("\nEl numero %i es compuesto.", *p_numero);
        printf("\nPosición: %p", p_numero);
    } else {
        printf("\nEl número %i es primo.", *p_numero);
        printf("\nPosición: %p", p_numero);
    }
}