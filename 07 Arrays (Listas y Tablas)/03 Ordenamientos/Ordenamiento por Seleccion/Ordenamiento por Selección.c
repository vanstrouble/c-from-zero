// ORDENAMIENTO POR SELECCIÓN

#include <stdio.h>

int main() {

    int a[5] = {3,4,1,5,2};
    int aux, min;

    for (int i = 0; i < 5; ++i) {
        min = i;
        for (int j = i +1; j <= 5; ++j) {
            if (a[j] < a[min]){
                min = j;
            }
        }
        aux = a[i];
        a[i] = a[min];
        a[min] = aux;
    }
    printf("Ascendente\n");
    for (int i = 0; i < 5; ++i) {
        printf("%i ", a[i]);
    }
    printf("\nDescendente\n");
    for (int i = 4; i >= 0; --i) {
        printf("\%i ", a[i]);
    }
    return 0;
}