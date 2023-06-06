// Uso de malloc() en C.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *a;

    a = (char*)malloc(sizeof(char));        // sizeof(int) tamaño de una variable entera.

    *a = 'a';

    printf("%c", *a);

    return 0;
}
