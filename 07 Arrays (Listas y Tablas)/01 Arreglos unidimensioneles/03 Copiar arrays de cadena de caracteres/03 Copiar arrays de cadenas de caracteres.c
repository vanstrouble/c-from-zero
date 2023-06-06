/* Problema 3. Hacer dos arrays de cadena de caracteres, pedir el nombre al usuario, guardarlo dentro de un array y
 * luego copiar el contenido de ese array a otro. */

#include <stdio.h>
#define TAM 20


int main() {

    char nombre1[TAM], nombre2[TAM];

    printf("Digite su nombre: ");
    gets(nombre1);  //nombre1 = Pedro

    //nombre2 = nombre1;

    strcpy(nombre2,nombre1);

    printf("\nSu nombre es: %s",nombre2);


    return 0;
}
