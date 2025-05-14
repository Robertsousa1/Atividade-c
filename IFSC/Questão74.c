// Questão 74 

#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha a opcao de venda:\n");
    printf("1 - Venda a Vista\n");
    printf("2 - Venda a Prazo 30 dias\n");
    printf("3 - Venda a Prazo 60 dias\n");
    printf("4 - Venda a Prazo 90 dias\n");
    printf("5 - Cartao de Debito\n");
    printf("6 - Cartao de Credito\n");
    scanf("%d", &opcao);

    printf("Opcao escolhida: %d\n", opcao);
    return 0;
}
