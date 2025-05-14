// Questão 54

#include <stdio.h>

int main() {
    int opcao, num1, num2, num3;

    // Leitura da opção e dos três números
    printf("Digite a opção (2, 3 ou 4): ");
    scanf("%d", &opcao);
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Exibição do valor baseado na opção
    if (opcao == 2) {
        printf("Valor de Num1: %d\n", num1);
    } else if (opcao == 3) {
        printf("Valor de Num2: %d\n", num2);
    } else if (opcao == 4) {
        printf("Valor de Num3: %d\n", num3);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
