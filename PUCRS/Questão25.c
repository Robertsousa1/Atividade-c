// Questão 25
#include <stdio.h>

int main() {
    int codigo;
    float precoCusto, precoNovo, somaPrecosAntigos = 0, somaPrecosNovos = 0;
    int totalProdutos = 0;

    while(1) {
        printf("Digite o codigo do produto (negativo para sair): ");
        scanf("%d", &codigo);

        if(codigo < 0) break; // Encerra a leitura se código for negativo

        printf("Digite o preco de custo do produto: ");
        scanf("%f", &precoCusto);

        // Calcula o novo preço
        precoNovo = precoCusto * 1.2;

        // Soma os preços
        somaPrecosAntigos += precoCusto;
        somaPrecosNovos += precoNovo;
        totalProdutos++;

        // Exibe o código e o novo preço
        printf("Codigo: %d, Preco novo: %.2f\n", codigo, precoNovo);
    }

    // Exibe as médias
    if(totalProdutos > 0) {
        printf("Media dos precos sem aumento: %.2f\n", somaPrecosAntigos / totalProdutos);
        printf("Media dos precos com aumento: %.2f\n", somaPrecosNovos / totalProdutos);
    }

    return 0;
}
