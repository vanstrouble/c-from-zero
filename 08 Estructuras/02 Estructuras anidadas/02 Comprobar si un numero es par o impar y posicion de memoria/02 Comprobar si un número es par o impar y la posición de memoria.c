/* Comprueba si un numero es par o impar, e imprime su posición de memoria */

#include <stdio.h>
#include <stdlib.h>

int ParNoPar(int n);

int main(){
    int n;
    int *p_n = &n;

    printf("Digite el primer numero: ");
    scanf("%i", &n);

    if(ParNoPar(*p_n) == 1){                            // Envio el puntero *p_n
        printf("El numero es par");
        printf("\nPosicion de memoria: %p\n\n", &n);    // Puede ser &n o p_n (indican posicion de memoria)
    }else{
        printf("El numero es impar\n\n");
    }

    system("pause");
    return 0;
}

int ParNoPar(int n){
    if(n % 2 == 0){
        return 1;
    }else return 0;
}
