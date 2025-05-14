// Questão 68 

#include <stdio.h>

int main() {
    float salario, desconto;

    // Solicita o salário
    printf("Digite o salario: ");
    scanf("%f", &salario);

    // Calcula o desconto com teto de R$ 318,20
    desconto = salario * 0.11;

    if (desconto > 318.20)
        desconto = 318.20;

    // Exibe o valor do desconto
    printf("Desconto previdenciario: %.2f\n", desconto);

    return 0;
}
