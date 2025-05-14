// Questão 60

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float total;

    // Leitura do código do item e da quantidade
    printf("Digite o código do item (100 a 105): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Calcular o valor a ser pago
    if (codigo == 100) {
        total = 1.10 * quantidade;
    } else if (codigo == 101) {
        total = 1.30 * quantidade;
    } else if (codigo == 102) {
        total = 1.50 * quantidade;
    } else if (codigo == 103) {
        total = 1.10 * quantidade;
    } else if (codigo == 104) {
        total = 1.30 * quantidade;
    } else if (codigo == 105) {
        total = 1.00 * quantidade;
    } else {
        printf("Código inválido!\n");
        return 1;
    }

    // Exibição do valor total
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
