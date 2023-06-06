/* Problema 6. Hacer un programa en C, que cree 2 archivos de texto (.txt), y luego utilizar la función fclose() para
 * cerrarlos. */

#include <stdio.h>
#include <stdlib.h>

FILE *fd1, *fd2;

int main() {
    fd1 = fopen("mambu.txt", "a+");
    fd2 = fopen("pino.txt", "a+");

    if (fd1 == NULL || fd2 == NULL){
            printf("Error al tratar de modificar el archivo");
    } else {
            printf("Se pudo modificar los archivos");
        }

    fclose(fd1);
    fclose(fd2);
    return 0;
}