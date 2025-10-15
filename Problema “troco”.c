#include <stdio.h>

int main() {
    float preco, dinheiro, troco;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%f", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%f", &dinheiro);

    troco = dinheiro - (preco * quantidade);

    printf("TROCO = R$ %.2f\n", troco);
    return 0;
}
