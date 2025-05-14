// Questão 45

#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, valorOperacao, novoSaldo;
    char tipoOperacao;

    // Leitura dos dados da conta
    printf("Digite o número da conta: ");
    scanf("%d", &numeroConta);
    printf("Digite o saldo atual: R$ ");
    scanf("%f", &saldo);
    printf("Digite o tipo de operação (D para depósito, R para retirada): ");
    scanf(" %c", &tipoOperacao);
    printf("Digite o valor da operação: R$ ");
    scanf("%f", &valorOperacao);

    // Cálculo do novo saldo
    if (tipoOperacao == 'D' || tipoOperacao == 'd') {
        novoSaldo = saldo + valorOperacao;
    } else if (tipoOperacao == 'R' || tipoOperacao == 'r') {
        novoSaldo = saldo - valorOperacao;
    } else {
        printf("Operação invál
