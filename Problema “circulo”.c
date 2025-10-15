#include <stdio.h>
#include <math.h>

int main() {
    double r, area;
    const double pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    area = pi * pow(r, 2);
    printf("AREA = %.3lf\n", area);
    return 0;
}
