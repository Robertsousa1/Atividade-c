#include <stdio.h>

Questão 47

int main() {
    char nome[100];
    float valorCompras, bonus;

    // Laço para ler os dados de 150 clientes
    for(int i = 0; i < 150; i++) {
        printf("Digite o nome do cliente: ");
        scanf("%s", nome);
        printf("Digite o valor das compras do ano passado: ");
        scanf("%f", &valorCompras);

        // Cálculo do bônus de 10% ou 15% dependendo do valor das compras
        if(valorCompras < 500000) {
            bonus = valorCompras * 0.10;
        } else {
            bonus = valorCompras * 0.15;
        }

        // Exibe o bônus calculado para o cliente
        printf("Cliente: %s | Bônus: %.2f\n", nome, bonus);
    }

    return 0;
}

