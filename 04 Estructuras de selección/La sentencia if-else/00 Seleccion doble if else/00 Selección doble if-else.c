/* Sentencia if de dos alternativas: if-else
 *
 * if (Condicion)
 *      Acción 1
 * else
 *      Accción 2
 */

// Nota del estudiante

#include <stdio.h>

int main() {

    float nota;

    printf("Digite la nota del examen: ");
    scanf("%f",&nota);

    if (nota > 10.5){
        puts("El alumno está aprobado");
    } else{
        puts("El alumno está reprobado");
    }

    return 0;
}
