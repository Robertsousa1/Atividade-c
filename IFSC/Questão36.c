// Questão 36

#include <stdio.h>

int main() {
    char nome[3][50];
    float vendas[3], comissao[3], total_vendas = 0;

    // Leitura dos dados de cada corretor
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do corretor %d: ", i + 1);
        scanf("%s", nome[i]);
        printf("Digite o valor das vendas de %s: R$", nome[i]);
        scanf("%f", &vendas[i]);

        // Cálculo da comissão
        if (vendas[i] > 50000.00) {
            comissao[i] = vendas[i] * 0.12;
        } else if (vendas[i] >= 30000.00) {
            comissao[i] = vendas[i] * 0.095;
        } else {
            comissao[i] = vendas[i] * 0.07;
        }

        // Soma das vendas para o total
        total_vendas += vendas[i];
    }

    // Exibição do relatório
    printf("\nRelatório de Vendas e Comissões:\n");
    for (int i = 0; i < 3; i++) {
        printf("Corretor: %s\n", nome[i]);
        printf("Valor da venda: R$ %.2f\n", vendas[i]);
        printf("Comissão: R$ %.2f\n\n", comissao[i]);
    }

    printf("Total de vendas da empresa: R$ %.2f\n", total_vendas);

    return 0;
}
