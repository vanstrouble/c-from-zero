/* El bucle for:
 *
 *      Sintaxis:
 *
 *          for(inicializacion; condicion; incremento){
 *          instrucciones;
 *          ...
 *          }
 */

// Mostrar los 10 primeros números - ascendente - descendente

#include <stdio.h>

int main() {

    int i;

    for (int i = 1; i <= 100; i++) {
        printf("\n%i. No debo llegar tarde a clases",i);
    }


    return 0;
}
