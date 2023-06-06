/* Una tienda ofrece un descuento del 15% sobre el total de la compra
 * y un cliente desea saber cuánto deberá pagar finalmente por su compra */

#include <stdio.h>

int main() {

    float total_compra, descuento, precio_pago;

    printf("Digite el total de la compra: ");
    scanf("%f",&total_compra);

    descuento = total_compra * 0.15;
    precio_pago = total_compra - descuento;

    printf("El precio final de la compra es: $%.2f",precio_pago);

    return 0;
}
