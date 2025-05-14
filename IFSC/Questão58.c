// Questão 58

#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;

    // Leitura do código e das notas
    printf("Digite o código do aluno: ");
    scanf("%d", &codigo);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média ponderada
    media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;

    // Exibição do código e da situação
    printf("Código do aluno: %d\n", codigo);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média ponderada: %.2f\n", media);
    if (media >= 5) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
