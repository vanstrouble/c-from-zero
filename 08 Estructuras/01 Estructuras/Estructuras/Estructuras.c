//Estructuras en C

#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
}persona1, persona2;

int main() {

    printf("1. Digite su nomnbre: ");
    gets(persona1.nombre);
    printf("1. Digite su edad: ");
    scanf("%i",&persona1.edad);

    fflush(stdin);

    printf("\n2. Digite su nomnbre: ");
    gets(persona2.nombre);
    printf("2. Digite su edad: ");
    scanf("%i",&persona2.edad);

    printf("\n\nSu nombre es: %s", persona1.nombre);
    printf("\nLa edad es: %i",persona1.edad);

    printf("\n\nSu nombre es: %s", persona2.nombre);
    printf("\nLa edad es: %i",persona2.edad);

    return 0;
}