#include <stdio.h>

int main() {
    float A, B, C;
    float area_quadrado, area_triangulo, area_trapezio;

    printf("Digite as tres medidas A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    area_quadrado = A * A;
    area_triangulo = (A * B) / 2;
    area_trapezio = ((A + B) * C) / 2;

    printf("Area do quadrado = %.4f\n", area_quadrado);
    printf("Area do triangulo = %.4f\n", area_triangulo);
    printf("Area do trapezio = %.4f\n", area_trapezio);
    return 0;
}
