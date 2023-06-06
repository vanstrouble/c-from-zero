/* Utilizar las 2 estructuras del problema 5 pero ahora pedir los datos para N alumnos, calculas cual de todos tiene el
 * mejor promedio, e imprimir sus datos*/

#include <stdio.h>
#include <stdlib.h>

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[45];
    char sexo[20];
    int edad;
    float promedio;
    struct Promedio prom;
};

void PedirDatos(struct Alumno a[],int n);
int CalProm(struct Alumno a[], int n);
void Mostrar(struct Alumno a[], int n);

int main(){
    int n;

    do{
        printf("Numero de estudiantes: ");
        scanf("%i", &n);
    }while(n <= 0);


    struct Alumno alumnos[n];
    PedirDatos(alumnos, n);
    Mostrar(alumnos, n);

    system("pause");
    return 0;
}

void PedirDatos(struct Alumno a[],int n){
    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Datos del alumno %i:", i+1);
        printf("\n\tNombre: ");
        fgets(a[i].nombre, 45, stdin);
        printf("\tSexo: ");
        fgets(a[i].sexo, 20, stdin);
        printf("\tEdad: ");
        scanf("%i", &a[i].edad);
        printf("\tNota 1: ");
        scanf("%f", &a[i].prom.nota1);
        printf("\tNota 2: ");
        scanf("%f", &a[i].prom.nota2);
        printf("\tNota 3: ");
        scanf("%f", &a[i].prom.nota3);
    }
}
int CalProm(struct Alumno a[], int n){
    float max = 0;
    int j = 0;

    for(int i = 0; i < n; i++){
        a[i].promedio = (a[i].prom.nota1 + a[i].prom.nota2 + a[i].prom.nota3)/3;
        if(a[i].promedio > max){
            max = a[i].promedio;
            j = i;
        }
    }

    return j;
}

void Mostrar(struct Alumno a[], int n){
    int j = CalProm(a, n);

    for(int i = 0; i < 50; i++){
        printf(".");
    }

    printf("\nDatos del alumno con mejor promedio:");
    printf("\n\tNombre: %s", a[j].nombre);
    printf("\tSexo: %s", a[j].sexo);
    printf("\tEdad: %i", a[j].edad);
    printf("\n\tNota 1: %.2f ", a[j].prom.nota1);
    printf("\n\tNota 2: %.2f", a[j].prom.nota2);
    printf("\n\tNota 3: %.2f", a[j].prom.nota3);
    printf("\n\tPromedio: %.2f\n\n", a[j].promedio);
}