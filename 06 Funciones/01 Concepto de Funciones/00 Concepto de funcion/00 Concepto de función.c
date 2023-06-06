/*	Funciones:

	- Funciones sin retorno de valor:

			void nombreFuncion( parametros ){
				Instrucciones...
			}

	- Funciones con retorno de valor:

			tipo_dato nombreFuncion( parametros ){
				Instrucciones...
				return expresion
			}
*/

//1. Saludo por pantalla con funcion void
//2. Sumar 2 numeros

#include <stdio.h>
// Prototipos
int sumar(int n1, int n2);

int main() {

    int a, b;

    printf("Digite 2 números: ");
    scanf("%i %i",&a,&b);

    printf("\nLa suma es: %i",sumar(a,b));

    return 0;
}

int sumar(int n1, int n2){
    int suma = 0;
    suma = n1 + n2;

    return suma;
}