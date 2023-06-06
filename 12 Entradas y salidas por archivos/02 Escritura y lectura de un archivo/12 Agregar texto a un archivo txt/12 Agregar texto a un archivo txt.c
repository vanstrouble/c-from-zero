/* Problema 12. Crear un archivo de texto, ponerle el texto que deseas, luego crear un programa en C para gregarle más
 * texto. */

#include <stdio.h>

FILE *fd;

int main() {
    int c;
    char direccion[] = "Problema 12 archivo prueba.txt";

    fd = fopen(direccion, "at"); // at = add text -- agregar texto

    if (fd == NULL){
        printf("Error al tratar de crear el archivo");
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