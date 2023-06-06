//Convertir grados Celsios a grados Fahrenheit

#include <stdio.h>

int main() {

    float  cel = 0, fah = 0;

    printf("Digite los grados Celsius\n");
    scanf("%f",&cel);

    fah = (cel * 1.8) + 32;

    printf("La temperatura en grados Fahrenheit es: %.2f",fah);



    return 0;
}
