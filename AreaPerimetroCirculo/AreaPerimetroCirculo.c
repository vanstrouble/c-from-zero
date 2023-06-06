#include <stdio.h>
#include <math.h>

int main() {
    /**
     * Calcular área y perímetro de un círculo
     */

    float area = 0, perimetro = 0;
    float radio = 0;
    printf("Digite el radio: ");
    scanf("%f", &radio);

    area = (float) (M_PI * pow(radio, 2));
    perimetro = (float) (2 * M_PI * radio);

    printf("\nÁrea = %.2f", area);
    printf("\nPerímetro = %.2f", perimetro);

    return 0;
}
