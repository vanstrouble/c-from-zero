// BÚSQUEDA SECUENCIAL
//Puede buscar números o caracteres.

#include <stdio.h>

/*  Búsqueda de números

int main() {

    int a[5] = {3,2,1,4,5};
    char band = 'F';
    int i, dato;

    dato = 10;
    //Búsqueda secuencial
    i = 0;
    while ((band == 'F') && (i < 5)){
        if (a[i] == dato){
            band = 'V';
        }
        i++;
    }
    if (band == 'F'){
        printf("El número no existe en el arreglo");
    } else if (band == 'V'){
        printf("El número existe, posición: %i",i -1);
    }

    return 0;
}
 */

// Búsqueda de caracteres.

int main() {

    char a[5] = {'a','e','i','u','o'};
    char band = 'F';
    int i;
    char dato;

    dato = 'l';
    //Búsqueda secuencial
    i = 0;
    while ((band == 'F') && (i < 5)){
        if (a[i] == dato){
            band = 'V';
        }
        i++;
    }
    if (band == 'F'){
        printf("El dato no existe en el arreglo");
    } else if (band == 'V'){
        printf("El dato existe, posición: %i",i -1);
    }

    return 0;
}