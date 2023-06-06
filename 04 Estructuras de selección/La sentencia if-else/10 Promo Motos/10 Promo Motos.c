/* Problema 10: Una distribuidora de motos tiene una promoción de fin de año
 * que consiste en lo siguiente: Las motos marca Honda tienen un descuento del
 * 5%, la marca Yamaha del 8% y las Suzuki del 10%, las otras marcas del 2%. */

#include <stdio.h>

int main() {

    char marca [20];
    float precio, descuento, precio_final;

    printf("MOTOCICLETAS EL TUERCAS\n");
    printf("Marcas participantes: Honda, Yamaha, Suzuki.\n");

    printf("\nDigite la marca de la moto: ");
    gets(marca);
    printf("Ingrese el precio de la motocicleta: ");
    scanf("%f",&precio);

    if (strcmp(marca,"Honda")==0){
        descuento = precio * 0.05;
        precio_final = precio - descuento;
        printf("El precio final es de $%.1f",precio_final);
    }
    else if (strcmp(marca,"Yamaha")==0){
        descuento = precio * 0.08;
        precio_final = precio - descuento;
        printf("El precio final es de $%.1f",precio_final);
    }
    else if (strcmp(marca,"Susuki")==0){
        descuento = precio * 0.10;
        precio_final = precio - descuento;
        printf("El precio final es de $%.1f",precio_final);
    }
    else{
        descuento = precio * 0.2;
        precio_final = precio - descuento;
        printf("El precio final es de $%.1f",precio_final);
    }

    return 0;
}
