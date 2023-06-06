/* Problema 14. Hacer un arreglode 10 números desordenados, luego ordenarlos con el ordenamiento por selección,
 * posteriormente pedir un dato a buscar y utilizar la búsqueda binaria para determinar si existe o no. */

#include <stdio.h>

int main() {

    int a[10]={3,6,1,2,7,8,4,9,10,5};
    int i, j, aux, dato, inf, sup, mitad, min;
    char band = 'F';

    //Ordenamiento por selección
    for (int i = 0; i < 10; ++i) {
        min = i;
        for (int j = i +1; j <= 10; ++j) {
            if (a[j] < a[min]){
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
    for (int i = 0; i < 10; ++i) {
        fflush(stdin);
        printf("%i ", a[i]);
    }
    printf("\nDigite un número: ");
    scanf("%i",&dato);

    //Búsqueda binaria
    inf = 0;
    sup = 10;

    while(inf<=sup){
        mitad = (inf+sup)/2;
        if(a[mitad]==dato){
            band = 'V';
            break;
        }
        if(a[mitad]>dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(a[mitad]<dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }

    if(band=='F'){
        printf("El dato no existe");
    }
    else if(band == 'V'){
        printf("El dato existe, en la pos: %i",mitad);
    }

    return 0;
}
