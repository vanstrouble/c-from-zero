// Problema 3. Leer un string con getchar() y contabilizar cuántas vocales tiene.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int c, cont = 0;

    printf("Digite una frase (y luego Ctrl + z)\n");
    while (EOF != (getchar())){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': cont++;
        }
    }

    printf("La frase tiene: %i vocales", cont);

    system("pause");

    return 0;
}
