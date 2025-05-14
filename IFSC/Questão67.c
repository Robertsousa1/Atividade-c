// Questão 67 
#include <stdio.h>

int main() {
    float salario, novoSalario;

    // Solicita o salário atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    // Aplica a regra de aumento conforme faixa salarial
    if (salario >= 1500 && salario < 1750)
        novoSalario = salario * 1.12;
    else if (salario >= 1750 && salario < 2000)
        novoSalario = salario * 1.10;
    else if (salario >= 2000 && salario < 3000)
        novoSalario = salario * 1.07;
    else if (salario >= 3000)
        novoSalario = salario * 1.05;
    else
        novoSalario = salario * 1.15;

    // Exibe o novo salário
    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}
