/* Problema 11. Hacer una lista de 10 numeros, luego pedirle al usuario que digite un numero, y atraves de una busqueda
 * secuencial determinar si el numero existe en la lista o no, y ademas indicar en que posicion se encuentra.*/

#include <stdio.h>

int main() {

    int a[10] = {3,6,7,1,4,10,9,2,12,11};
    int i, dato;
    char band = 'F';

    printf("Digite un número: ");
    scanf("%i",&dato);


    //Busqueda secuencial
    i=0;
    while ((band == 'F')&&(i<10)){
        if (a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if (band == 'F'){
        printf("El número no existe en la lista");
    }
    else if (band == 'V') {
        printf("El número existe en la posición %i", i - 1);
    }

    return 0;
}