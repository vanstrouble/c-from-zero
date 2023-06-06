/* Ingresar por teclado el nombre, edad y el sexo de cualquier persona
 * e imprima sólo si la persona es de sexo masculino y mayor de edad el
 * nombre de la persona. */

#include <stdio.h>

int main() {

    char nombre [30], sexo [20];
    int edad;

    printf("Escriba su nombre: ");
    gets(nombre);
    printf("Digite su edad: ");
    scanf("%i",&edad);
    fflush(stdin);  // El código no funciona sin esta línea.
    printf("Escriba su sexo (masculino o femenino): "); // Si pones el sexo después del nombre funciona sin la línea anterior.
    gets(sexo);

    if ((strcmp(sexo,"masculino")== 0)&&(edad >= 18)){
        printf("\nCumple con los requisitos: %s",nombre);
    } else {
        printf("\nNo cumple con los requisitos.");
    }


    return 0;
}
