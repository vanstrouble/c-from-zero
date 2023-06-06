/* Problema 14. Mostrar los meses del año, pidiendo al usuario un número entre (1 - 12)
 * y mostrar el mes al que corresponde. */

#include <stdio.h>

int main() {

    int meses;

    printf("Digite un número entre 1 y 12: ");
    scanf("%i",&meses);

    switch (meses){
        case 1: printf("Enero"); break;
        case 2: printf("Febrero"); break;
        case 3: printf("Marzo"); break;
        case 4: printf("Abril"); break;
        case 5: printf("Mayo"); break;
        case 6: printf("Junio"); break;
        case 7: printf("Julio"); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Septiembre"); break;
        case 10: printf("Octubre"); break;
        case 11: printf("Noviembre"); break;
        case 12: printf("Septiembre"); break;
        default: printf("Número inválido.");
    }


    return 0;
}
