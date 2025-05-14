// Questão 64 
#include <stdio.h>
#include <string.h>

int main() {
    char codigo[10];
    int quantidade;
    float preco;

    // Solicita o código do produto e a quantidade
    printf("Digite o codigo do produto: ");
    scanf("%s", codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    // Verifica o código e define o preço unitário
    if (strcmp(codigo, "ABCD") == 0)
        preco = 5.30;
    else if (strcmp(codigo, "XYPK") == 0)
        preco = 6.00;
    else if (strcmp(codigo, "KLMP") == 0)
        preco = 3.20;
    else if (strcmp(codigo, "QRST") == 0)
        preco = 2.50;
    else {
        printf("Codigo invalido!\n");
        return 0;
    }

    // Exibe o preço total
    printf("Preco total: %.2f\n", preco * quantidade);
    return 0;
}
