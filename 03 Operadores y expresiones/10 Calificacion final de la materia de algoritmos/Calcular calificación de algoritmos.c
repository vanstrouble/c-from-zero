/* Un alumno desea saber cuál será su calificación en Algoritmos.
 * Dicha calificación se compone de los siguientes porcentajes:
 * 55% del promedio de sus tres calificaciones parciales.
 * 30% de la calificación del examen final.
 * 15% de la calificación de un trabajo. */

#include <stdio.h>

int main() {

    float parcial1, parcial2, parcial3, examen_final, trabajo_final;
    float promedio_parciales, porparcial, porexamen, portrabajo;
    float calificacion;

    printf("PROGRAMA PARA CALCULAR CALIFICACIONES\n");

    printf("Ingrese la calificación del PRIMER parcial: "); scanf("%f",&parcial1);
    printf("Ingrese la calificación del SEGUNDO parcial: "); scanf("%f",&parcial2);
    printf("Ingrese la calificación del TERCER parcial: "); scanf("%f",&parcial3);

    printf("Ingrese la calificación del EXAMEN FINAL: "); scanf("%f",&examen_final);
    printf("Ingrese la calificación del TRABAJO FINAL: "); scanf("%f",&trabajo_final);

    promedio_parciales = (parcial1 + parcial2 + parcial3)/3;

    porparcial = promedio_parciales * 0.55;
    porexamen = examen_final * 0.30;
    portrabajo = trabajo_final * 0.15;

    calificacion = porparcial + porexamen + portrabajo;

    printf("La calificación final es: %.1f",calificacion);


    return 0;
}
