// Questão 62 
#include <stdio.h>

int main() {
    float saldo, credito;

    // Solicita o saldo médio do cliente
    printf("Digite o saldo medio: ");
    scanf("%f", &saldo);

    // Calcula o valor do crédito com base no saldo médio
    if (saldo <= 200)
        credito = 0;
    else if (saldo <= 400)
        credito = saldo * 0.20;
    else if (saldo <= 600)
        credito = saldo * 0.30;
    else
        credito = saldo * 0.40;

    // Exibe o resultado
    printf("Saldo medio: %.2f\n", saldo);
    printf("Credito especial: %.2f\n", credito);

    return 0;
}
