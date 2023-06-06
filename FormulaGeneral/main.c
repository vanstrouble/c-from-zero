#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    double x1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    double x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    printf("\nX1 = %.3lf \nX2 = %.3lf", x1, x2);
    return 0;
}
