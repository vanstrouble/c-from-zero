// Hacer un programa que calcule áreas de trapecios.

#include <stdio.h>

int main() {


    float baseM, basem, area, altura;

    printf("Digite la base mayor: "); scanf("%f",&baseM);
    printf("Digite la base menor: "); scanf("%f",&basem);
    printf("Digite la altura: "); scanf("%f",&altura);

    area = ((baseM + basem)*altura)/2;

    printf("\nEl área del trapecio es: %.2f",area);

    return 0;
}
