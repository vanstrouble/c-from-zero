/* Problema 4. Determinar si un número es primo o no; con punteros y además indicar ern qué posición de memoria se
 * guardó el número. */

#include <stdio.h>
#include <stdlib.h>

void N_es_par_o_no(unsigned int *numero);

int main(){
    int n;

    printf("Digite un numero: ");
    scanf("%i", &n);

    N_es_par_o_no(&n);                      // Le paso la direccion en memoria de n

    return 0;
}

void N_es_par_o_no(unsigned int *numero){   // Declaro el puntero *numero para acceder a la informacion del espacio en memoria de n
    if(*numero%2 == 0){
        printf("\nEl numero %i es par", *numero);
        printf("\nSu posicion en memoria es: %p\n\n", numero);
    }else{
        printf("\nEl numero %i es impar", *numero);
        printf("\nSu posicion en memoria es: %p\n\n", numero);
    }
}