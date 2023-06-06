/* Problema 1. Utilizar las funciones getchar() y putchar() para leer e imprimir un string.
 *
 *
 * getchar():
 * La función getchar() se iutiliza para leer carácter a carácter. La llamada getchar() devuelve el carácter siguiente
 * del flujo de entrada stdin. En caso de error o de encontrar el fin del archivo, devuelve EOF (macro definida en stdin.h).
 *
 * putchar():
 * La función putchar() se utiliza para escibir en la salida (stdout) carácter a carácter. El car´´acter que se escribe
 * es el transmitido como argumento.
 *
 */

#include <stdio.h>

int main() {
    int c;

    while (c != (c = getchar())){   // mientras c no haya llegado al final
        putchar(c);
    }

    return 0;
}
