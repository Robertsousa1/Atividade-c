// Questão 33

#include <stdio.h>

int main() {
    float prova1, prova2, prova3, media;

    // Leitura das notas das provas
    printf("Digite a nota da primeira prova (peso 2): ");
    scanf("%f", &prova1);
    printf("Digite a nota da segunda prova (peso 3): ");
    scanf("%f", &prova2);
    printf("Digite a nota da terceira prova (peso 5): ");
    scanf("%f", &prova3);

    // Cálculo da média final ponderada
    media = (prova1 * 2 + prova2 * 3 + prova3 * 5) / (2 + 3 + 5);

    // Exibição da média final
    printf("A média final do aluno é: %.2f\n", media);

    return 0;
}
