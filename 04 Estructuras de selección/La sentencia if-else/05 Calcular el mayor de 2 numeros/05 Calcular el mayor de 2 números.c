/* Calcular el mayor de dos números leídos del teclado y visualizarlo en pantalla. */

#include <stdio.h>

int main() {

    int n1, n2;

    printf("Digite 2 números: ");
    scanf("%i %i",&n1,&n2);

    if (n1 > n2){
        printf("\nEl mayor es: %i",n1);
    }
    else if(n2 > n1){
        printf("El mayor número es: %i",n2);
        }
    else{
            printf("Ambos son iguales");
        }

    return 0;
}
