// Lista simplemente enlazada

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dato;
    struct Nodo *siguiente;
} Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void agregar(Nodo *nodo);

int main() {
    Nodo *primerNodo = malloc(sizeof(Nodo));
    primerNodo -> dato = 5;

    Nodo *segundoNodo = malloc(sizeof(Nodo));
    segundoNodo -> dato = 7;

    agregar(primerNodo);
    agregar(segundoNodo);

    Nodo *i = primerNodo;
    while (i != NULL){
        printf("%i\n", i -> dato);
        i = i -> siguiente;
    }

    return 0;
}

void agregar(Nodo *nodo){
    nodo -> siguiente = NULL;

    if (primer == NULL){
        primer = nodo;
        ultimo = nodo;
    } else {
        ultimo -> siguiente = nodo;
        ultimo = nodo;
    }
}