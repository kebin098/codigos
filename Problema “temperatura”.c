#include <stdio.h>

int main() {
    char escala;
    float temp, convertido;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala);

    if (escala == 'C' || escala == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        convertido = (9.0 * temp / 5.0) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2f\n", convertido);
    } else if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temp);
        convertido = 5.0 * (temp - 32.0) / 9.0;
        printf("Temperatura equivalente em Celsius: %.2f\n", convertido);
    } else {
        printf("Escala invalida.\n");
    }

    return 0;
}
