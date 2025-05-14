// Questão 84 

#include <stdio.h>
#include <string.h>

int main() {
    int numeroConta;
    char nome[50];
    float saldo, deposito, saque;

    // Lê dados da conta
    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);
    printf("Digite o nome do titular: ");
    scanf("%s", nome);
    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);

    // Menu de operações
    int opcao;
    do {
        printf("\n--- MENU CONTA CORRENTE ---\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Ver saldo\n");
        printf("0 - Sair\n");
        printf("Escolha a opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para deposito: ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("Deposito realizado. Novo saldo: %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor para saque: ");
                scanf("%f", &saque);
                if (saque <= saldo) {
                    saldo -= saque;
                    printf("Saque realizado. Novo saldo: %.2f\n", saldo);
                } else {
                    printf("Saldo insuficiente!\n");
                }
                break;
            case 3:
                printf("Saldo atual: %.2f\n", saldo);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
