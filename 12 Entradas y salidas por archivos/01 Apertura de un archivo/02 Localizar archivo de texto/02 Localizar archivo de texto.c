/* Problema 02. Crear un archivo de texto (.txt) en la ubicación que elijas, posteriormente crear un programa en C que
 * localice tu archivo de texto creado. */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    char dirección[] = "\\Users\\pedrovazquez\\CLionProjects\\Udemy\\12 Entradas y salidas por archivos\\01 Apertura de un archivo\\01 Comprobar si existe un archivo txt con fopen\\CMakeLists.txt";

    fd = fopen(dirección, "r"); // r = read -- leer

    if (fd == NULL){
        printf("El archivo no existe");
    } else {
        printf("Se encontró el archivo.");
        printf("\nUbicación: %s", dirección);
    }
    return 0;
}