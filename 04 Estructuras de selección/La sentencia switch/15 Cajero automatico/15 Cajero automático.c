/* Problema 15. Hacer un programa que simule un cajero automático con un saldo inicial
 * de 1000 dolares. */

#include <stdio.h>

int main() {

    int opcion;
    float saldo = 1000, agregar, retirar;

    printf("\tBienvenido a su Cajero Virtual.");
    printf("\n1. Ingreso en cuenta");
    printf("\n2. Retiro de dinero de la cuenta");
    printf("\n3. Salir");
    printf("\nOpción: ");
    scanf("%i",&opcion);

    switch (opcion){
        case 1: printf("\n¿Cuánto dinero quiere ingresar en la cuenta?\n");
                scanf("%f", &agregar);
                saldo += agregar;
                printf("El saldo total es de:  %.2f",saldo);
            break;
        case 2: printf("\n¿Cuánto dinero desea retirar?\n");
                scanf("%f",&retirar);
                if (retirar > saldo){
                    printf("La cantidad a retirar es mayor al saldo");
                } else {
                    saldo -= retirar;
                    printf("El saldo disponible es de: %.2f",saldo);
                }
            break;
        case 3:
            break;
        default: printf("Se esquivocó de opción de menú");
    }
    return 0;
}
