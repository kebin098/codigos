#include <stdio.h>

int main() {
    float largura, comprimento, valor_m2, area, preco;

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);
    printf("Digite o valor do metro quadrado (R$): ");
    scanf("%f", &valor_m2);

    area = largura * comprimento;
    preco = area * valor_m2;

    printf("Area do terreno = %.2f m2\n", area);
    printf("Preco do terreno = R$ %.2f\n", preco);
    return 0;
}
