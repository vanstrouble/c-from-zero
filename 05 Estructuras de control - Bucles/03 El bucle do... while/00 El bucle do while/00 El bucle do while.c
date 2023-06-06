/* Repetición: El bucle do... while
 *
 *      Sintaxis:
 *
 *              do{
 *                  instrucciones...
 *              }while(condición)           */

// Mostrar los 10 primeros números.
// Saludo.

#include <stdio.h>

int main() {

    char opc;

    do{
        fflush(stdin);
        printf("%Hola");
        printf("\nDigite 's' para saludar nuevamente: ");
        scanf("%c",&opc);
    }
    while (opc == 's' || opc == 'S');

    return 0;
}
