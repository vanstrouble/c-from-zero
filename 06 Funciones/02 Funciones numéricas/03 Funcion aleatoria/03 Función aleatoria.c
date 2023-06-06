/* Funcion Aleatoria:

	srand(time(NULL));
	variable  = limite_inferior + rand() % ((limite_superior + 1 ) - limite_inferior);
*/


//Ejemplo de función aleatoria

#include <stdio.h>
#include <time.h>

void funcion_aleatoria();

int main() {

    funcion_aleatoria();

    return 0;
}

void funcion_aleatoria(){
    int numero, li, ls;

    srand(time(NULL));

    printf("Digite el límite inferior: ");
    scanf("%i",&li);
    printf("Digite el límite superior: ");
    scanf("%i",&ls);

    for (int i = 1; i <= 10; ++i) {
        numero = li + rand() % ((ls+1) - li);

        printf("%i.\n",numero);
    }


}