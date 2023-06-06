/* Problema 3. realizar un programa en C que lea un arreglo de estructuras los datos de N empleados de la empresa y que
 * imprima los datos del empleado con mayor y menor salario. */

#include<stdio.h>
#include<stdlib.h>

struct empleado{
    char nombre[20];
    char sexo[20];
    float salario;
}empleados[100];

int main(){
    int i,n,pmay,pmen;
    float mayor = 0.0, menor = 9999999;
    printf("Digite el numero de empleados de la empresa: ");
    scanf("%i",&n);

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("%i. Digite su nombre: ",i+1);
        gets(empleados[i].nombre);
        fflush(stdin);
        printf("%i. Digite su sexo: ",i+1);
        gets(empleados[i].sexo);
        printf("%i. Digite su salario: ",i+1);
        scanf("%f",&empleados[i].salario);
        printf("\n");
    }
    //Comprobando el mayor y menor Salario
    for(i=0;i<n;i++){
        if(empleados[i].salario > mayor){
            mayor = empleados[i].salario;
            pmay = i;
        }
        else if(empleados[i].salario < menor){
            menor = empleados[i].salario;
            pmen = i;
        }
    }

    printf("\nEl empleado con el mayor salario es: \n");
    printf("\nNombre: %s",empleados[pmay].nombre);
    printf("\nSexo: %s",empleados[pmay].sexo);
    printf("\nSalario: %.2f",empleados[pmay].salario);

    printf("\n\n\nEl empleado con el menor salario es: \n");
    printf("\nNombre: %s",empleados[pmen].nombre);
    printf("\nSexo: %s",empleados[pmen].sexo);
    printf("\nSalario: %.2f\n",empleados[pmen].salario);

    system("pause");
    return 0;
}
/* // PARA SUAR ESTRUCTURAS CON FUNCIONES
#include <stdio.h>
#include <stdlib.h>

struct empleado{
    char nombre[40];
    char sexo[20];
    float salario;
};

void PedirDatos(struct empleado a[], int n);
void Mostrar(struct empleado a[], int n);

int main(){
    int n;

    printf("Numero de empleados: ");
    scanf("%i", &n);
    printf("\n");

    struct empleado empleados[n];

    PedirDatos(empleados, n);
    Mostrar(empleados, n);

    system("pause");
    return 0;
}

void PedirDatos(struct empleado a[], int n){    // Pide datos de los empleados
    for(int i = 0; i < n; i++){
        printf("Nombre del empleado: ");
        scanf("%s", &a[i].nombre);
        printf("\tSexo: ");
        scanf("%s", &a[i].sexo);
        printf("\tSalario: ");
        scanf("%f", &a[i].salario);
        printf("\n");
    }
}

void Mostrar(struct empleado a[], int n){        // Muestra los datos en consola
    float sal = 0;
    int h, k;

    for(int i = 0; i < n; i++){
        if(a[i].salario > sal){
            sal = a[i].salario;
            h = i;
        }
    }

    for(int  j = 0; j < n; j++){
        if(a[j].salario < sal){
            sal = a[j].salario;
            k = j;
        }
    }

    printf("\nEl empleado con mayor salario es: ");
    printf("\n\tNombre: %s", a[h].nombre);
    printf("\n\tSexo %s", a[h].sexo);
    printf("\n\tSalario: %.2f", a[h].salario);
    printf("\n");

    printf("\nEl empleado con menor salario es: ");
    printf("\n\tNombre: %s", a[k].nombre);
    printf("\n\tSexo: %s", a[k].sexo);
    printf("\n\tSalario: %.2f", a[k].salario);
    printf("\n");
    printf("\n");
} */