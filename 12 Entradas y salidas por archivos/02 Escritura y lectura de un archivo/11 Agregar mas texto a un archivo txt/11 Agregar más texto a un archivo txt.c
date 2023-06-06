// Problema 11. Agregar más texto a un archivo .txt

#include <stdio.h>

FILE *fd;

int main() {
    int c;
    char direccion[] = "hola.txt";

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