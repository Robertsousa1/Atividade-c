// Questão 55

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Leitura das três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibição da média e situação do aluno
    printf("Média: %.2f\n", media);
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 4) {
        printf("Em prova final\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
