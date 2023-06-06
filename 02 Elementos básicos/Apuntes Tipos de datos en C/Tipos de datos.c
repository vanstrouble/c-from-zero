//Tipos de datos

#include <stdio.h>

int main() {

    char a = 'e';   //Tamaño = 1 byte   Rango: 0...255
    short b = -15;  //Tamaño = 2 bytes  Rango: -128...127
    int c = 1024;   //Tamaño = 2 bytes  Rango: -32768... 32767
    unsigned int d = 128; //Tamaño = 2 bytes  Rango: 0...65535
    long e = 12456; //Tamaño: 4 bytes   Rango: -2147483648...2147483637
    float f = 15.638;    //Tamaño: 4 bytes   Rango: 3.4*(10)...3*(10)
    double g = 123123.123123;   //Tamaño: 8 bytes   Rango: 1.7*(10)...1.7(10)

    printf("El elemento es: %lf",g);

    return 0;
}
