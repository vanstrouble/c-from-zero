//Problema 4: Determinar si un número es par, impar

#include <stdio.h>

int main() {

    int numero;

    printf("Digite el número: ");
    scanf("%i",&numero);

    if (numero % 2 == 0){
        printf("El número es PAR");
    }
    if (numero % 2 != 0){
        printf("El número es IMPAR");
    }

    return 0;
}
