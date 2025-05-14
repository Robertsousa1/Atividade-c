// Questão 61

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int opcao;

    // Leitura das notas e da opção
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Escolha a opção de média (1 - Aritmética, 2 - Ponderada): ");
    scanf("%d", &opcao);

    // Calcular a média com base na opção
    if (opcao == 1) {
        media = (nota1 + nota2 + nota3) / 3;
    } else if (opcao == 2) {
        media = (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10;
    } else {
        printf("Opção inválida!\n");
        return 1;
    }

    // Exibição da média
    printf("Média: %.2f\n", media);

    return 0;
}
