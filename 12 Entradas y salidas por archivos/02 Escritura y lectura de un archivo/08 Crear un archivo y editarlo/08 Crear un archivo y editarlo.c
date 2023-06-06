/* Problema 8. Crear un archivo de texto (.txt) con el nombre de "hola mundo" en la carpeta que elijas, y dentro del
 * archivo, copiar "Hola y Bienvenidos al Lenguaje de Programación en C". */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    int c;
    char direccion[] = "hola mundo.txt";

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
