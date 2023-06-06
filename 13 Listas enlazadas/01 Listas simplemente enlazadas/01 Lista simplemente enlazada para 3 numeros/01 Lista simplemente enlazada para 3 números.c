// Problema 1. Crear una lista simplemente enlazada de 3 números flotantes, pidiendo al usuario dichos números.

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float numero;
    struct Nodo *siguiente;
} Nodo;

Nodo *primer = NULL;
Nodo *ultimo = NULL;

void Agregar(Nodo *nodo);

int main() {
    float n1, n2, n3;

    printf("Digite 3 numeros flotantes: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    Nodo *primerNodo = malloc(sizeof(Nodo));
    primerNodo -> numero = n1;

    Nodo *segundoNodo = malloc(sizeof(Nodo));
    segundoNodo -> numero = n2;

    Nodo *tercerNodo = malloc(sizeof(Nodo));
    tercerNodo -> numero = n3;

    Agregar(primerNodo);
    Agregar(segundoNodo);
    Agregar(tercerNodo);

    Nodo *i = primerNodo;
    while (i != NULL){
        printf("%.2f\n", i -> numero);
        i = i -> siguiente;
    }

    return 0;
}

void Agregar(Nodo *nodo){
    nodo -> siguiente = NULL;

    if (primer == NULL){
        primer = nodo;
        ultimo = nodo;
    } else  {
        ultimo -> siguiente = nodo;
        ultimo = nodo;
    }
}