/* Problema 1. Hacer una estructura llamada corredor, en la cual se tendran los siguientes miembros: Nombre, edad, sexo,
 * club, pedir datos al usuario para un corredor, y asignarle una categoria de competicion:
 *
	- Juvenil <= 18 años
	- Señor <= 40 años
	- Veterano > 40 años

posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct corredor{
    char nombre[20];
    int edad;
    char sexo[20];
    char club[20];
}corredor1;

int main() {
    char categoria[20];

    printf("Digite su nombre: ");
    gets(corredor1.nombre);
    printf("Digite su edad: ");
    scanf("%i",&corredor1.edad);
    fflush(stdin);
    printf("Digite su sexo: ");
    gets(corredor1.sexo);
    printf("Digite su club: ");
    gets(corredor1.club);

    if (corredor1.edad <= 18){
        strcpy(categoria,"Juvenil"); // categoria = juvenil
    } else if (corredor1.edad <= 40){
        strcpy(categoria,"Senior");
    } else{
        strcpy(categoria,"Veterano");
    }

    printf("\n- Datos del corredor -\n");
    printf("\nCategoria: %s",categoria);
    printf("\nNombere: %s",corredor1.nombre);
    printf("\nEdad: %i",corredor1.edad);
    printf("\nSexo: %s",corredor1.sexo);
    printf("\nClub: %s\n\n",corredor1.club);

    system("pause");
    return 0;
}