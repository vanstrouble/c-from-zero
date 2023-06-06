/* Imprimir una tabla de equivalencia entre Fahrenheit y Celcius
 * la tabla va de 20 en 20, desde 0 hasta 300 */

#include <stdio.h>

int main() {
    float fahr, celcius;
    int lower = 0, upper = 300, step = 20;

    fahr = lower;

    printf("Fahr\tCelcius\n");

    while (fahr <= upper) {
        celcius = 5 * (fahr - 32) / 9;
        printf("%3.0f\t\t%6.2f\n", fahr, celcius);
        fahr += step;
    }
    return 0;
}
