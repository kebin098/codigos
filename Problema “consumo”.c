#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Combustivel gasto (L): ");
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;
    printf("Consumo medio = %.3f km/L\n", consumo);
    return 0;
}
