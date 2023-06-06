/* Problema 4. Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres cada uno dentro de sus respectiva variable,
 * y luego intercambiar los arrays. */

#include <stdio.h>
#include <string.h>
#define TAM 20

int main() {

    char aux[TAM], nombre1[TAM], nombre2[TAM];

    printf("Dijite el primer nombre: ");
    gets(nombre1);
    printf("Digite el segundo nombre: ");
    gets(nombre2);

    strcpy(aux, nombre1);
    strcpy(nombre1, nombre2);
    strcpy(nombre2, aux);

    printf("\nEl primer nombre ahora es: %s",nombre1);
    printf("\nEl segundo nombre ahora es: %s", nombre2);

    return 0;
}