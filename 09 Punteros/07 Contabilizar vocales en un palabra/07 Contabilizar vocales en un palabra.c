// Problema 7. Pedir su nombre al usuario y devolver el número de vocales que hay.

#include <stdio.h>

int CuentaVocales (char *s);

int main() {
    char nombre[20];

    printf("Digite su nombre: ");
    gets(nombre);

    printf("El número de vocales es: %i", CuentaVocales(nombre));


    return 0;
}
int CuentaVocales (char *s){
    int cont = 0;

    while (*s){ //mientras que s no sea nulo
        switch (*s){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':   cont++;
        }
        s++;
    }
    return cont;
}