/* Demostrar el uso básico de punteros
 *
 *      posiciones de memoria
 *      punteros
 */

#include <stdio.h>
/*
int main(){
    int numero = 40;

    printf("Dato: %i", numero); //Dato
    printf("\nPosición: %p", &numero);  //Posición en memoria

    return 0;
} */

int main(){
    int numero = 50;
    int *p_numero;

    p_numero = &numero; //&numero = Posición de memoria de la variable numero

    printf("Valor de la variable\n");
    printf("Dato: %i", numero);
    printf("\nDato: %i", *p_numero);

    printf("\n\nPosición de memoria:\n");
    printf("Posición: %p", &numero);
    printf("\nPosición: %p", p_numero);

    return 0;
}