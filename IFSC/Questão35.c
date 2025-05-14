// Questão 35

#include <stdio.h>

int main() {
    char nome[100];
    float nota_portugues, nota_matematica, nota_gerais, media;

    // Leitura do nome e das notas
    printf("Digite o nome do candidato: ");
    scanf("%s", nome);
    printf("Digite a nota de Português: ");
    scanf("%f", &nota_portugues);
    printf("Digite a nota de Matemática: ");
    scanf("%f", &nota_matematica);
    printf("Digite a nota de Conhecimentos Gerais: ");
    scanf("%f", &nota_gerais);

    // Cálculo da média
    media = (nota_portugues + nota_matematica + nota_gerais) / 3;

    // Exibição das notas e cálculo da aprovação
    printf("Nome: %s\n", nome);
    printf("Nota Português: %.2f\n", nota_portugues);
    printf("Nota Matemática: %.2f\n", nota_matematica);
    printf("Nota Conhecimentos Gerais: %.2f\n", nota_gerais);
    printf("Média: %.2f\n", media);

    if (media > 7.0 && nota_portugues >= 5.0 && nota_matematica >= 5.0 && nota_gerais >= 5.0) {
        printf("O candidato foi aprovado.\n");
    } else {
        printf("O candidato foi reprovado.\n");
    }

    return 0;
}
