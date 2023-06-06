// Problema 6. Sumar pares desde n hasta m.

#include <stdio.h>

int main() {

    int n, m, suma = 0;

    printf("Digite desde qué número quiere iniciar: ");
    scanf("%i", &n);

    printf("Digite hasta qué número quiere llegar: ");
    scanf("%i", &m);

    while (n <= m){
        if (n % 2 == 0){
            suma = suma + n;
        }
        n++;
    }
    printf("\nLa suma de los números pares dentro de tu parámetro es: %i",suma);

    return 0;
}
