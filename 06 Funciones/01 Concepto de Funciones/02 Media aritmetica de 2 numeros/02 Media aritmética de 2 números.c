// Problema 2. Hacer un programa que realice la media aritmética de 2 números. (Con función).

#include <stdio.h>

int media (int n1, int n2);

int main() {

    int a, b;

    printf("Digite dos números: ");
    scanf("%i %i",&a,&b);

    printf("\nLa media aritmética es: %i", media(a,b));

    return 0;
}

int media (int n1, int n2){
    int media_aritmetica = 0;
    media_aritmetica = (n1 + n2) / 2;

     return media_aritmetica;
}