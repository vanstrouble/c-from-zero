// Problema 7. Suma de los primeros números pares.


#include <stdio.h>

int main() {

    int i, suma = 0;

    for (int i = 0; i <= 10; i+= 2){
        suma += i;
    }
    printf("\nLa suma de los pares es: %i",suma);
    return 0;
}
