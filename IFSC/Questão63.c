// Questão 63 
#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco;

    // Solicita o código e a quantidade
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Verifica o código e define o preço
    switch (codigo) {
        case 1001: preco = 5.32; break;
        case 1324: preco = 6.45; break;
        case 6548: preco = 2.37; break;
        case 987:  preco = 5.32; break;
        case 7623: preco = 6.45; break;
        default:
            printf("Codigo invalido!\n");
            return 0;
    }

    // Calcula e exibe o preço total
    printf("Preco total: %.2f\n", preco * quantidade);
    return 0;
}
