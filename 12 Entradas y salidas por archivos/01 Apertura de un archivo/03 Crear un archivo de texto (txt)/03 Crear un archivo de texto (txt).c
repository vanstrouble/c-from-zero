// Problema 3. Hacer un programa en C que cree un archivo de texto (.txt).

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    char direccion[] = "Macintosh HD:\\Users\\pedrovazquez\\CLionProjects\\Udemy\\12 Entradas y salidas por archivos\\01 Apertura de un archivo\\03 Crear un archivo de texto (txt)\\hola.txt";

    fd = fdopen(direccion, "w"); // w = write -- escribir -- crear

    if (fd == NULL){
        printf("No se puede crear el archivo");
    } else {
        printf("Se creo el archivo");
        printf("\nUbicación: %s", direccion);
    }

    return 0;
}
