#include <stdio.h>

int main() {
    char nome1[30], nome2[30];
    int idade1, idade2;
    float media;

    printf("Nome da primeira pessoa: ");
    scanf("%s", nome1);
    printf("Idade de %s: ", nome1);
    scanf("%d", &idade1);

    printf("Nome da segunda pessoa: ");
    scanf("%s", nome2);
    printf("Idade de %s: ", nome2);
    scanf("%d", &idade2);

    media = (idade1 + idade2) / 2.0;
    printf("A idade media de %s e %s eh %.1f anos\n", nome1, nome2, media);
    return 0;
}
