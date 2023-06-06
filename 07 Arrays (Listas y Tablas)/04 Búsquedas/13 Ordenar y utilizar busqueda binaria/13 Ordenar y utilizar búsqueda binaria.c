/* Problema 13. Hacer un arreglo de 10 números desordenados, luego ordenarlos con el método burbuja, posteriormente
 * pedir un dato a buscar y utilizar la búsqueda binaria para determinar si existe o no. */

#include <stdio.h>

int main() {

    int a[10]={3,6,1,2,7,8,4,9,10,5};
    int i, j, aux, dato, inf, sup, mitad;
    char band = 'F';

    //Método burbuja
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (a[j] > a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%i ",a[i]);
    }
    printf("\nDigite un número: ");
    scanf("%i",&dato);

    //Búsqueda binaria
    inf = 0;
    sup = 10;

    while (inf < sup){
        mitad = (inf + sup)/2;
        if (a[mitad] == dato){
            band = 'V';
            break;
        }
        if (a[mitad]>dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if (a[mitad]<dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }
    }
    if (band == 'F'){
        printf("El número no existe");
    }
    else if (band == 'V'){
        printf("El número existe en la posición: %i", mitad);
    }

    return 0;
}
