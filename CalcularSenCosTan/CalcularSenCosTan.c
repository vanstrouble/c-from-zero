#include <stdio.h>
#include <math.h>

int main() {
    double param, seno, coseno, tangente;
    printf("Digite un número: ");
    scanf("%lf", &param);

    // Todo está en radianes
    seno = sin(param * M_PI / 180);   // sin // cos // tan | Es lo mismo para todas
    coseno = cos(param * M_PI / 180);   // sin // cos // tan | Es lo mismo para todas
    tangente = tan(param * M_PI / 180);   // sin // cos // tan | Es lo mismo para todas

    printf("\nEl seno de %.2lf es: %.6lf", param, seno);
    printf("\nEl coseno de %.2lf es: %.6lf", param, coseno);
    printf("\nLa tangente de %.2lf es: %.6lf", param, tangente);
    return 0;
}
