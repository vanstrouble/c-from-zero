//Calcular longitudes de circunferencia

#include <stdio.h>
#define PI 3.14159265358979323846

//Formula : L = (2 * PI) * radio

int main() {

    float radio, longitud;

    printf("Ingrese el radio: \n");
    scanf("%f",&radio);

    longitud = (2 * PI) * radio;

    printf("\nLa longitud de la circunferencia es: %.2f",longitud);

    return 0;
}
