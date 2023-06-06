/* Problema 12. Hacer un array pidiendo el número de elementos, rellenar el array con números digitados por el teclado,
 * luego pedir al usuario un número y hacer una búsqueda secuencial para indicar si ese elemento existe o no, también
 * entregra posición. */

#include <stdio.h>

int main() {

    int i, elementos, numero;
    char band = 'F';

    printf("Digite los elemwntos que quiere en el arreglo: ");
    scanf("%i", &elementos);

    int arreglo[elementos];

    for (int i = 0; i < elementos; ++i) {
        printf("Digite un número, arreglo[%i]: ", i);
        scanf("%i",&arreglo[i]);
    }
    printf("\nAhora digite el número a buscar: ");
    scanf("%i",&numero);

    i=0;

    while ((band == 'F') && (i < elementos)){ //Aquí comienza la búsqueda secuencial.
        if (arreglo[i] == numero){
            band = 'V';
        }
        i++;
    }
    if (band == 'F'){
        printf("\nEl número no existe dentro del arreglo.");
    } else if (band == 'V'){
        printf("\nEl número existe y está en la posición: %i", i - 1);
    }

    return 0;
}