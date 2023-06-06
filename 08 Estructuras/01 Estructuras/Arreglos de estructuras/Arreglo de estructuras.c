// Arreglos de Estructuras

#include <stdio.h>

struct persona{
    char nombre[20];
    int edad;
}personas[5]; // persona1, persona2... persona5

int main() {

    for (int i = 0; i < 5; ++i) {
        fflush(stdin);
        printf("%i. Digite su nombre: ",i+1);
        gets(personas[i].nombre);
        printf("%i. Digite su edad: ",i+1);
        scanf("%i",&personas[i].edad);
        printf("\n");
    }

    for (int i = 0; i < 5; ++i) {
        printf("\n%i. Su nombre es: %s", i+1, personas[i].nombre);
        printf("\n%i. Su edad es: &i", i+1, personas[i].edad);
        printf("\n");
    }


    return 0;
}