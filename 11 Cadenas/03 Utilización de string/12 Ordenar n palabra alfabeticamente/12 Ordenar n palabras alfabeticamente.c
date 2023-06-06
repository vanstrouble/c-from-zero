/* Problema 12. Pedir n palabras al usuario y posteriormente ordenarlas alfabéticamente.
 * Utilizar un método de ordenamiento (Burbuja, inserción, selección). */

#include<stdio.h>
#include<string.h>

int main(){
    char palabra[10][20];
    char aux[20];

    int k, l = 0;

    printf("\nPara terminar escriba: * \n");

    do {
        printf("Digita la palabra: ");
        gets(palabra[l]);
        l++;
        } while (strcmp(palabra[l - 1], "*")!= 0);

    for(int i = 0; i < l - 1; ++i){
        k = i;
        strcpy(aux, palabra[i]);
        for(int j = i + 1; j < l; ++j){
            if(strcmp(palabra[j], aux)<0)
            {
                k=j;
                strcpy(aux, palabra[j]);
            }
        }
        strcpy(palabra[k], palabra[i]);
        strcpy(palabra[i], aux);
    }

    for(int i = 0; i < l; ++i){
        printf("%s", palabra[i]);
        printf("\n");
    }

  return 0;
}