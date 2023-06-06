// Problema 2. Leer una cadena de caracteres con getchar() y contabiliazar cuántos espacios ocupa.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, i = 0;

    while (EOF != (c = getchar())){
        putchar(c);
        i++;
        if (c == '\n'){
            printf("\nNúmero de carácteres: %i\n\n", i - 1);
            i = 0;
        }
    }
    system("pause");
    return 0;
}
