#include <stdio.h>

int main() {
    /**
     * Programar algo para saber el signo zodical de las personas.
     */
     int dia, mes;

     printf("\t.:SIGNO ZODIACAL:.");
     printf("\n\n(01)Enero \t(02)Febrero \t(03)Marzo \t(04)Abril \t(05)Mayo \t(06)Junio \n(07)Julio \t(08)Agosto \t(09)Septiembre \t(10)Octubre \t(11)Noviembre \t(12)Diciembre");

     printf("\n\nIngresa tu fecha de nacimiento…\n");
     printf("Día: ");
     scanf("%d", &dia);
     printf("Mes: ");
     scanf("%d", &mes);

    if (mes >= 1 && mes <= 12) {
        if (dia >= 1 && dia <= 31) {
            if (mes == 1 && dia >= 20 || mes == 2 && dia <= 18) {
                printf("\nFecha de nacimiento: Día: %d, Mes: %d\nEres Acuario \nAstro: Urano / Saturno\nElemento: Aire", dia, mes);
            } else if (mes == 2 && dia >= 19 || mes == 3 && dia <= 20) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Picis \nAstro: Neptuno / Jupiter\nElemento: Agua", dia, mes);
            } else if (mes  == 3 && dia >= 21 || mes == 4 && dia <= 20) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Aries \nAstro: Marte / Plutón\nElemento: Fuego", dia, mes);
            } else if (mes == 4 && dia >= 21 || mes == 5 && dia <= 20) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Tauro \nAstro: Venus / Tierra\nElemento: Tierra", dia, mes);
            } else if (mes == 5 && dia >= 21 || mes == 6 && dia <= 24) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Géminis \nAstro: Mercurio\nElemento: Aire", dia, mes);
            } else if (mes == 6 && dia >= 25 || mes == 7 && dia <= 22) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Cáncer \nAstro: Luna\nElemento: Agua", dia, mes);
            } else if (mes == 7 && dia >= 23 || mes == 8 && dia <= 23) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Leo \nAstro: Sol\nElemento: Fuego", dia, mes);
            } else if (mes == 8 && dia >= 24 || mes == 9 && dia <= 23) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Virgo \nAstro: Mercurio\nElemento: Tierra", dia, mes);
            } else if (mes == 9 && dia >= 24 || mes == 10 && dia <= 22) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Libra \nAstro: Venus\nElemento: Aire", dia, mes);
            } else if (mes == 10 && dia >= 23 || mes == 11 && dia <= 22) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Escorpio \nAstro: Plutón / Marte\nElemento: Agua", dia, mes);
            } else if (mes == 11 && dia >= 22 || mes == 12 && dia <= 21) {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Sagitario \nAstro: Júpiter\nElemento: Fuego", dia, mes);
            } else {
                printf("\nFecha de nacimiento: Día: %d | Mes: %d\nEres Capricornio \nAstro: Urano / Saturno\nElemento: Tierra", dia, mes);
            }
        } else {
            printf("\nError. Revise los datos introducidos y vuelva a intentarlo");
        }
    } else {
        printf("\nError. Revise los datos introducidos y vuelva a intentarlo");
    }

    printf("\n\nTen un buen día. :)");
    return 0;
}
