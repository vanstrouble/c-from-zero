/* Problema 5. Realice un programa que lea en un array el sexo de los N estudiantes del curso de algoritmos y que
 * determine cuántos hombre y mujeres se encuentran en el grupo, suponiendo que los datos son extraídos alumno por
 * alumno */

#include <stdio.h>
#include <string.h>

int main() {

    int i = 0, numero, varon = 0, mujer = 0;
    char alumnos[30];

    printf("Digite el total de alumnos de la clase: ");
    scanf("%i",&numero);

    for (int i = 1; i <= numero; ++i) {
        fflush(stdin);
        printf("\n %i. Digite el sexo del alumno: ",i);
        gets(alumnos);

        if (strcmp(alumnos, "masculino")==0){
            varon++;
        } else if (strcmp(alumnos, "femenino")==0){
            mujer++;
        }
    }

    printf("\nEl total de varones es: %i",varon);
    printf("\nEl total de mujeres es: %i",mujer);

    return 0;
}
