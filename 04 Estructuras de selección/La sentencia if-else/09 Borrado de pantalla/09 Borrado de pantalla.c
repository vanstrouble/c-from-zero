// Problema 9: Hacer un programa que borre la pantalla al pulsar 1.

#include <stdio.h>
#include <stdlib.h>

int main() {

    char tecla;

    printf("¡¡¡¡Programa de borrado de pantalla!!!!");
    printf("\n-----------------------------------\n");
    printf("\n-----------------------------------\n");
    printf("\nDigite el número 1: ");
    scanf("%c",&tecla);

    if (tecla == '1'){
        system("clear");
        printf("Ha funcionado el borrado de pantalla");
    }
    else{
        fflush(stdin);
        printf("\nNo ha funcionado el borrado de pantalla");
        printf("\nPor favor digite el número 1: ");
        scanf("%c",&tecla);
        if (tecla == '1'){
            system("clear");
        } else{
            printf("No funcionó");
        }
    }

    return 0;
}
