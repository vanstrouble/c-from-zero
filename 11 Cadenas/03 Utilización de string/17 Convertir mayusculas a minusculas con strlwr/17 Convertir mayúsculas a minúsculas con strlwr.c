/* Problema 17. Pedir el nombre y apellido al usuario (en mayúsculas), posteriormente utilizar
 * la función strlwr() para convertir las MAYÚSCULAS a minúsculas e imprimir los datos. */

#include <stdio.h>
#include <string.h>

struct datos{
    char nombre[20];
    char apellidos[20];
} datos1;

int main() {
    printf("Digite su nombre (En mayúsculas): ");
    fgets(datos1.nombre, 20, stdin);
    printf("Digite sus apellidos (En mayúsculas): ");
    fgets(datos1.apellidos, 20, stdin);

    // Convirtiendo a minúsculas
    strlwr(datos1.nombre);
    strlwr(datos1.apellidos);

    printf("\nSu nombre: %s", datos1.nombre);
    printf("\nSu apellido: %s", datos1.apellidos);
    return 0;
}