/* Problema 16. Hacer un menú que considere las siguientes opciones:
 * Caso 1: Cubo de un número.
 * Caso 2: Número par e impar.
 * Caso 3: Salir.
 */

#include <stdio.h>
#include <math.h>

int main( ) {

    int caso, numero, cubo;

    printf("\tNÚMEROS LOCOS");
    printf("\n1. Cubo de un número.");
    printf("\n2. Número par o impar.");
    printf("\n3. Salir.");
    printf("\nOpción: ");
    scanf("%i",&caso);


    switch (caso){
        case 1: printf("Digite un número entero: ");
                scanf("%i",&numero);
                cubo = pow(numero,3);
                printf("El cubo del número es: %i",cubo);
            break;
        case 2: printf("Digite un número entero: ");
                scanf("%i",&numero);
                if(numero % 2 == 0) {
                    printf("EL número es par.");
                }
                else {
                    printf("El número es impar.");
                }
                break;

        case 3:
            break;
        default: printf("No ingresó un número válido.");
    }



    return 0;
}
