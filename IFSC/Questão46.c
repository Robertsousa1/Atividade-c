// Questão 46

#include <stdio.h>

int main() {
    char nome[100];
    int numDiarias;
    float diaria = 60.00, taxaServico, totalConta;

    // Leitura do nome do cliente e número de diárias
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);
    printf("Digite o número de diárias: ");
    scanf("%d", &numDiarias);

    // Cálculo da taxa de serviços
    if (numDiarias > 15) {
        taxaServico = 5.50 * numDiarias;
    } else if (numDiarias == 15) {
        taxaServico = 6.00 * numDiarias;
    } else {
        taxaServico = 8.00 * numDiarias;
    }

    // Cálculo do total da conta
    totalConta = (diaria * numDiarias) + taxaServico;

    // Exibição dos resultados
    printf("Nome do cliente: %s\n", nome);
    printf("Total da conta: R$ %.2f\n", totalConta);

    return 0;
}
