//Media aritmética de 3 números cualesquiera

#include <stdio.h>

int main() {

    float n1, n2, n3, media;

    printf("Ingrese los 3 números: ");
    scanf("%f %f %f",&n1,&n2,&n3);

    media = (n1 + n2 + n3)/3;

    printf("\nLa media aritmética es: %.2f",media);

    return 0;
}
