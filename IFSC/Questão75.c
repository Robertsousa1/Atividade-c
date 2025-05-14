// Questão 75 

#include <stdio.h>

int main() {
    float valor, total;
    int opcao;

    printf("Digite o valor da venda: ");
    scanf("%f", &valor);

    printf("Escolha a opcao de pagamento:\n");
    printf("1 - Vista\n");
    printf("2 - Prazo 30 dias\n");
    printf("3 - Prazo 60 dias\n");
    printf("4 - Prazo 90 dias\n");
    printf("5 - Cartao Debito\n");
    printf("6 - Cartao Credito\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: total = valor * 0.90; break;
        case 2: total = valor * 0.95; break;
        case 3: total = valor; break;
        case 4: total = valor * 1.05; break;
        case 5: total = valor * 0.92; break;
        case 6: total = valor * 0.93; break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("Total da venda: R$ %.2f\n", total);
    return 0;
}
