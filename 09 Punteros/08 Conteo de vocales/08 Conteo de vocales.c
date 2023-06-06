/* Problema 8. Pedir una cadena de caracteres (string) al usuario e indicar cuántas veces aparece la vocal a, e, i, o, u
 * en la cadena de caracteres. */

#include <stdio.h>

void ConteoVocales (char *s);

int main() {
    char cadena[20];

    printf("Ingrese una palabra: ");
    fgets(cadena, 20, stdin);

    ConteoVocales(cadena);

    return 0;
}
void ConteoVocales (char *s){
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    while (*s){
        switch(*s){
            case 'a': contA++;
                break;
            case 'e': contE++;
                break;
            case 'i': contI++;
                break;
            case 'o': contO++;
                break;
            case 'u': contU++;
                break;
        }
        s++;
    }
    printf("La vocal a se repite %i", contA);
    printf("\nLa vocal e se repite %i", contE);
    printf("\nLa vocal i se repite %i", contI);
    printf("\nLa vocal o se repite %i", contO);
    printf("\nLa vocal u se repite %i", contU);
}