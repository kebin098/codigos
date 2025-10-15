#include <stdio.h>

int main() {
    char nome[30];
    float valor_hora, horas, pagamento;

    printf("Nome do funcionario: ");
    scanf("%s", nome);
    printf("Valor por hora: ");
    scanf("%f", &valor_hora);
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);

    pagamento = valor_hora * horas;

    printf("O pagamento para %s deve ser R$ %.2f\n", nome, pagamento);
    return 0;
}
