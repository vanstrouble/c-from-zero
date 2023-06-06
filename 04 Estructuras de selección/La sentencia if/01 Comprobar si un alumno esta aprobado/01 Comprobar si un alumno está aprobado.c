/* Problema 1: Comprobar a través de un programa si un alumno aprobó
 * o no un examen (Aprueba si su nota es mayor a 10.5) */

#include <stdio.h>

int main() {

    float examen;

    printf("Digite la nota del examen: "); scanf("%f",&examen);

    if(examen > 6.7) {
        printf("El alumno está aprobado"); //Tambien se puede imprimir con puts() pero sólo dentro de un condicional
    }


    return 0;
}
