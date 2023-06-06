/* Problema 9. Tomar el archivo de texto (.txt) creado en el problema 7, y con la función fgetc() leer todo su
 * contenido.
 *
 *  fgetc(puntero_archivo);
 *
 */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    int c;
    char direccion[] = "Macintosh HD:\\Users\\pedrovazquez\\CLionProjects\\Udemy\\12 Entradas y salidas por archivos\\01 Apertura de un archivo\\07 Utilizar fputc para copiar texto en un archivo\\cmake-build-debug\\hola.txt";
    fd = fopen(direccion, "rt");    // rt = read text -- leer texto

    if (fd == NULL){
        printf("Error al tratar de leer el archivo.");
        return 1;
    }
    while ((c = fgetc(fd)) != EOF){
        if (c == '\n'){
            printf("\n");
        } else {
            putchar(c);
        }
    }
    fclose(fd);
    return 0;
}