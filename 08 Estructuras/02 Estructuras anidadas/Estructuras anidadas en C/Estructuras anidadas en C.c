// ESTRUCTURAS ANIDADAS EN C

#include <stdio.h>
#include <stdlib.h>

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];


int main() {

    for (int i = 0; i < 2; ++i) {
        fflush(stdin);
        printf("%i. Digite su nombre: ",i+1);
        scanf("%s",&empleados[i].nombre);
        printf("%i. Digite su dirección: ",i+1);
        scanf("%s",&empleados[i].dir_empleado.direccion);
        printf("%i. Digite su ciudad: ",i+1);
        scanf("%s",&empleados[i].dir_empleado.ciudad);
        printf("%i. Digite su provincia: ",i+1);
        scanf("%s",&empleados[i].dir_empleado.provincia);
        printf("%i. Digite su salario: ",i+1);
        scanf("%lf",&empleados[i].salario);
        printf("\n");
    }

    for (int i = 0; i < 2; ++i) {
        printf("\n\nDatos del empleado nº %i: ",i+1);
        printf("\n- Nombre: %s", empleados[i].nombre);
        printf("\n- Dirección: %s",empleados[i].dir_empleado.direccion);
        printf("\n- Ciudad: %s",empleados[i].dir_empleado.ciudad);
        printf("\n- Provinecia: %s",empleados[i].dir_empleado.provincia);
        printf("\n- Salario: %.2lf\n\n",empleados[i].salario);
    }

    system("pause");
    return 0;
}
