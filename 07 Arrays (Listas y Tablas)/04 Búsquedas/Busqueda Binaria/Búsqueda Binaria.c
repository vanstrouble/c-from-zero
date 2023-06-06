// BÚSQUEDA BINARIA O DICOMÓTICA

#include <stdio.h>

int main() {

    int a[5]={1,2,3,4,5};
    int inf, sup, mitad, dato;
    char band = 'F';

    dato = 3;
    //Búsqueda Binaria

    inf = 0;
    sup = 5;

    while (inf <= sup){
        mitad = (inf + sup)/2;
        if (a[mitad] == dato){
            band = 'V';
            break;
        }
        if (a[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if (a[mitad] < dato){
            mitad = (inf + sup)/2;
        }
    }
    if (band == 'F'){
        printf("El número no estiste.");
    } else if (band == 'V'){
        printf("El número existe en la posición: %i",mitad);
    }

    return 0;
}
