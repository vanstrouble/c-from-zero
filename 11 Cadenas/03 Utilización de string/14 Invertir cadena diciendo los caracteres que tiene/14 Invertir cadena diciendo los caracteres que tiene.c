// Problema 14. Pedir una cadena al usuario y luego invertirla, diciendo además cuántos caracteres  tiene.

#include <stdio.h>
#include <string.h>

int main(){
    char c[50];

    printf("Escriba algo: ");
    fgets(c, 50, stdin);

    for(int i = 0; i < strlen(c); i++){     // Para eliminar el salto de linea '\n'
        if(c[i] == '\n'){
            c[i] = '\0';
        }
    }

    strrev(c);

    printf("\nSu oracion al reves: %s", c);
    printf("\nTiene %i caracteres\n\n", strlen(c));

    return 0;
}