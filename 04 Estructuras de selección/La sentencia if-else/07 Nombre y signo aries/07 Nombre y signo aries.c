/* Problema 7: Ingresar por teclado el nombre y el signo de cualquier persona e imprima
 * el nombre sólo si la persona es signo Aries, en caso contrario imprima "No es signo Aries". */

#include <stdio.h>

int main() {

    char nombre [30], signo [20];

    printf("Digite su nombre: ");
    gets(nombre);
    printf("Digite su signo: ");
    gets(signo);

    if (strcmp(signo,"aries")==0){
        printf("\nEs signo aries, su nombre es: %s",nombre);
    }
    else {
        printf("No es signo aries");
    }

    return 0;
}
