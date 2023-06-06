/* Problema 1. Utilizar la función fopen(), para determinar si existe un archivo de texto (.txt) o no.
 *
 * fopen(nombre de archivo, modo);
 *
 *      nombre de archivo = cadena ... contiene el identificador externo del archivo.
 *      modo = cadena              ... contiene el modo en que va a ser tratado el archivo,
 *
 */

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {
    char dirección[] = "\\Users\\pedrovazquez\\CLionProjects\\Udemy\\12 Entradas y salidas por archivos\\01 Apertura de un archivo\\01 Comprobar si existe un archivo txt con fopen\\hola.txt";

    fd = fopen(dirección, "r"); // r = read -- leer

    if (fd == NULL){
        printf("El archivo no existe");
    } else {
        printf("Se encontró el archivo.");
        printf("\nUbicación: %s", dirección);
    }
    return 0;
}