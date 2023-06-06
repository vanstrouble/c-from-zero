// ORDENAMIENTO POR INSERCIÓN
//Puede ordenar números y caracteres.

#include <stdio.h>

//Ordenamiento de números
/*
int main() {

    int a[5] = {3,1,4,2,5}, pos, aux;

    for (int i = 0; i < 5; ++i) {
        pos = i;
        aux = a[i];
        while ((pos > 0) && (aux < a[pos - 1])){
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = aux;
    }
    printf("Ascendente\n");
    for (int i = 0; i < 5; ++i) {
        printf("%i ",a[i]);
    }
    printf("\nDescendente\n");
    for (int i = 4; i >= 0; --i) {
        printf("%i ", a[i]);
    }
    return 0;
}
 */

//Ordenamiento de caracteres
int main() {

    char a[5] = {'e','i','a','u','o'}, pos, aux;

    for (int i = 0; i < 5; ++i) {
        pos = i;
        aux = a[i];
        while ((pos > 0) && (aux < a[pos - 1])){
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = aux;
    }
    printf("Ascendente\n");
    for (int i = 0; i < 5; ++i) {
        printf("%c ",a[i]);
    }
    printf("\nDescendente\n");
    for (int i = 4; i >= 0; --i) {
        printf("%c ", a[i]);
    }
    return 0;
}