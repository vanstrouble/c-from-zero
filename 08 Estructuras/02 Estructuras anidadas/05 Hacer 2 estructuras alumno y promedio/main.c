/* Problema 5. Hacer 2 estructuras una llamada promedio que tendra los siguientes miembros: nota1,nota2,nota3; y otro
 * llamada alumno que tendra los siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada
 * en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo
 * imprimir todos sus datos incluidos el promedio.*/

#include <stdio.h>
#include <stdlib.h>

struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
}alumno1;

void PedirDatos (struct alumno alumnos[]);
void Promedio (struct alumno a[]);

int main() {

    float prom = 0;

    printf("Digite el nombre del estudiante: ");
    scanf("%s",&alumno1.nombre);
    printf("\tDigite la edad: ");
    scanf("%i",&alumno1.edad);
    printf("\tDigite el sexo: ");
    scanf("%s",&alumno1.sexo);
    printf("\tDigite la primera nota del alumno: ");
    scanf("%f",&alumno1.prom.nota1);
    printf("\tDigite la segunda nota del alumno: ");
    scanf("%f",&alumno1.prom.nota2);
    printf("\tDigite la tercera nota del alumno: ");
    scanf("%f",&alumno1.prom.nota3);

    prom = (alumno1.prom.nota1 + alumno1.prom.nota3 + alumno1.prom.nota2)/3;

    printf("\nNombre: %s",alumno1.nombre);
    printf("\nEdad: %i",alumno1.edad);
    printf("\nSexo: %s",alumno1.sexo);
    printf("\nSu promedio es de: %.2f\n\n",prom);

    system("pause");
    return 0;
}