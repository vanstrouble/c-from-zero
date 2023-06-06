/* Problema 4. Leer un string con getchar() y contabilizar cuántas veces aparece la vocal a, e, i, o, u, e imprimir el
 * contador de cada una. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, i[5] = {};

    printf("Ingrese texto: \n\n");

    while (EOF != (c = getchar())){
        putchar(c);

        switch (c){
            case 'a': i[0] += 1;
                break;
            case 'e': i[1] += 1;
                break;
            case 'i': i[2] += 1;
                break;
            case 'o': i[3] += 1;
                break;
            case 'u': i[4] += 1;
                break;
        }
    }

    if (c == '\n'){
        printf("\t'a' aparece: %i\n", i[0]);
        printf("\t'e' aparece: %i\n", i[1]);
        printf("\t'i' aparece: %i\n", i[2]);
        printf("\t'o' aparece: %i\n", i[3]);
        printf("\t'u' aparece: %i\n", i[4]);
    }

    system("pause");
    return 0;
}
