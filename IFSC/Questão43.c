// Questão 43

#include <stdio.h>

int main() {
    char nome[100], categoria;
    float salario, salarioReajustado;

    // Leitura do nome, categoria e salário do funcionário
    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);
    printf("Digite a categoria do funcionário (A, B, C, D, etc.): ");
    scanf(" %c", &categoria);  // O espaço antes de %c é para consumir o \n
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Cálculo do reajuste com base na categoria
    switch (categoria) {
        case 'A': case 'C': case 'F': case 'H':
            salarioReajustado = salario * 1.10;
            break;
        case 'B': case 'D': case 'E': case 'I': case 'J': case 'T':
            salarioReajustado = salario * 1.15;
            break;
        case 'K': case 'R':
            salarioReajustado = salario * 1.25;
            break;
        case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'S':
            salarioReajustado = salario * 1.35;
            break;
        case 'U': case 'V': case 'X': case 'Y': case 'W': case 'Z':
            salarioReajustado = salario * 1.50;
            break;
        default:
            salarioReajustado = salario;
            break;
    }

    // Exibição do salário reajustado
    printf("Nome: %s\n", nome);
    printf("Categoria: %c\n", categoria);
    printf("Salário reajustado: R$ %.2f\n", salarioReajustado);

    return 0;
}
