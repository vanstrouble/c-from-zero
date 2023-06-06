/* Problema 2. Dijite un número, si el número supera a 10, multiplique los 10 primeros números, si no, súmelos. */

#include <stdio.h>

int main() {

    int cont, n, mult = 1, suma = 0;

    printf("Digite un número: ");
    scanf("%i", &n);

    cont = 1;

    if (n <= 10){
        while (cont <= n){
            mult = mult * cont;
            cont++;
        }
        printf("\nLa multiplicación de los números es: %i",mult);
    } else{
        while(cont < n){
            suma = suma + cont;
            cont++;
        }
        printf("La suma de los números es: %i",suma);
    }

    return 0;
}
