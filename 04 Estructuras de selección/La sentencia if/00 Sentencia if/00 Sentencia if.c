/* La Sentencia if:
 *
 * if (condicion)
 *      accción
 */

//Prueba de Divisibilidad

#include <stdio.h>

int main(){

    int n1,n2;

    printf("Digites 2 números: "); scanf("%i %i",&n1,&n2);

    if (n1 % n2 == 0){
        printf("El número %i es divisible entre %i",n1,n2);
    }

    return 0;
}