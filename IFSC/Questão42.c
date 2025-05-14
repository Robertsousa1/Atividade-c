// Questão 42

#include <stdio.h>

int main() {
    char nome[4][100];
    float preco[4], precoDesconto[4], total = 0.0;
    float desconto[4];

    // Leitura dos dados dos artigos
    for (int i = 0; i < 4; i++) {
        printf("Digite o nome do artigo %d: ", i+1);
        scanf("%s", nome[i]);
        printf("Digite o preço do artigo %d: R$ ", i+1);
        scanf("%f", &preco[i]);
        printf("Digite o percentual de desconto do artigo %d: ", i+1);
        scanf("%f", &desconto[i]);

        // Cálculo do preço com desconto
        precoDesconto[i] = preco[i] - (preco[i] * desconto[i] / 100);
        total += precoDesconto[i];

        // Exibição do artigo e preço com desconto
        printf("Artigo: %s\n", nome[i]);
        printf("Preço com desconto: R$ %.2f\n\n", precoDesconto[i]);
    }

    // Exibição do total a pagar
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
