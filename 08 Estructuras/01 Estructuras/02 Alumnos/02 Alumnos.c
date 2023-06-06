/* Problema 2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes miembros: Nombres, edad,
 * promedio, pedir datos al usuario para tres alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente
 * imprimir los datos del alumno. */

#include <stdio.h>
#include <stdlib.h>

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
};

void PedirDatos(struct alumno a[]);
void Mostrar(struct alumno a[]);

int main(){
    struct alumno alumnos[3];

    PedirDatos(alumnos);
    Mostrar(alumnos);

    system("pause");
    return 0;
}

void PedirDatos(struct alumno a[]){
    for(int i = 0; i < 3; i++){
        printf("Nombre del alumno: ");
        scanf("%s", &a[i].nombre);
        printf("Edad: ");
        scanf("%i", &a[i].edad);
        printf("Promedio: ");
        scanf("%f", &a[i].promedio);
        printf("\n");
    }
}

void Mostrar(struct alumno a[]){
    float mayor = 0;
    int j = 0;

    for(int i = 0; i < 3; i++){
        if(a[i].promedio > mayor){
            mayor = a[i].promedio ;
            j = i;
        }
    }

    printf("\nEl alumno con mayor promedio es: ");
    printf("\n\tNombre: %s", a[j].nombre);
    printf("\n\tEdad: %i", a[j].edad);
    printf("\n\tPromedio: %.1f", a[j].promedio);
    printf("\n");
}