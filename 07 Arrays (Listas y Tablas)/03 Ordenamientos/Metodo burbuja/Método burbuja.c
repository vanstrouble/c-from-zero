// MÉTODO BURBUJA

#include <stdio.h>

int main() {

    int array[5] = {3,2,4,1,5}, aux;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    //Ascendente
    for (int i = 0; i < 5; ++i) {
        printf("%i ", array[i]);
    }
    printf("\n");
    //Descendente
    for (int i = 4; i >= 0; --i) {
        printf("%i ", array[i]);
    }

    return 0;
}
