// Serie de Taylor
#include <stdio.h>
#include <math.h>

double factorial(int n);
double taylor(int n, int x);

int main() {
    int n, x;
    printf("Ingrese un numero (n): ");
    scanf("%d", &n);
    printf("Ingrese un numero (x): ");
    scanf("%d", &x);

    printf("\nEl valor de Taylor para n = %d, x = %d es = %f\n", n, x, taylor(n, x));
    return 0;
}

double taylor (int n, int x) {
    double termino, sumatoria = 0;
    for (int i = 0; i < n; ++i) {
        termino = pow(x, i) / factorial(i);
        sumatoria += termino;
    }
    return sumatoria;
}

double factorial (int n) {
    double fac = 1;
    for (int i = 2; i <= n; ++i) {
        fac *= i;
    }
    return fac;
}