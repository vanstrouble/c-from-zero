/* Problema 12. Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico.
 *
 * 1 - Turismo, peaje = $500.
 * 2 - Autobus, peaje = $3000.
 * 3 - Motocicleta, peaje = $300.
 * Caso contrario - Vehículo no autorizado.
 */

#include <stdio.h>

int main() {

    int vehiculo, peaje;

    printf("Dijite el tipo de vehículo: ");
    scanf("%i",&vehiculo);

    switch (vehiculo){
        case 1: peaje = 500;
        printf("Turismo $%i",peaje);
        break;
        case 2: peaje = 3000;
        printf("Autobus $%i",peaje);
        break;
        case 3: peaje = 300;
        printf("Motocicleta $%i",peaje);
        break;
        default: printf("Vehículo no autorizado.");
}

return 0;
}
