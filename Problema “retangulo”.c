#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("Area = %.4f\nPerimetro = %.4f\nDiagonal = %.4f\n", area, perimetro, diagonal);
    return 0;
}
