/* Problema 7. Utilizar fputc() para introducir caracteres en un archivo de texto (.txt).
 *
 * fputc(c, puntero_archivo);
 */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    int c;
    char direccion[] = "hola.txt";

    fd = fopen(direccion, "wt"); // wt = write text -- escribir texto

    if (fd == NULL){
        printf("Error al crear el archivo");
        return 1;
    }

    while (EOF != (c = getchar())){
        fputc(c, fd);
        if (c == '\n'){
            break;
        }
    }

    fclose(fd);


    return 0;
}