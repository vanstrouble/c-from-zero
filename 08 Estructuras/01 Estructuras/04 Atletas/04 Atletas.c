/* Problema 4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes miembros:
 * nombre, país, número de medallas, y que devuelva los datos (nombre, país) del atleta que ha ganado el mayor número
 * de medallas. */

#include <stdio.h>
#include <stdlib.h>

struct Atletas{
    char nombre[40];
    char pais[40];
    int nmedallas;
};

void Mostrar(struct Atletas a[], int n);
void PedirDatos(struct Atletas a[], int n);

int main(){
    int n = 0;

    printf("Numero de atletas: ");
    scanf("%i", &n);
    printf("\n");

    struct Atletas atleta[n];

    PedirDatos(atleta, n);
    Mostrar(atleta, n);

    system("pause");
    return 0;
}

void PedirDatos(struct Atletas a[], int n){     // Pide datos
    for(int i = 0; i < n; i++){
        printf("Nombre del Atleta: ");
        scanf("%s", &a[i].nombre);
        printf("\tPais: ");
        scanf("%s", &a[i].pais);
        printf("\tNumero de medallas: ");
        scanf("%i", &a[i].nmedallas);
        printf("\n");
    }
}

void Mostrar(struct Atletas a[], int n){        // Muestra los datos
    int h, m = 0;

    for(int i = 0; i < n; i++){
        if(a[i].nmedallas > m){
            m = a[i].nmedallas;
            h = i;
        }
    }

    printf("\nEl atleta con mayor numero de medallas: ");
    printf("\n\tNombre: %s", a[h].nombre);
    printf("\n\tPais: %s", a[h].pais);
    printf("\n\n");
}