// Questão 3
#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, total = 0, somaFilhos = 0, ate100 = 0;

    // Loop até que um salário negativo seja inserido
    while(1) {
        printf("Digite o salario (negativo para sair): ");
        scanf("%f", &salario);

        // Encerra o loop se o salário for negativo
        if(salario < 0) break;

        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        // Acumula os dados
        somaSalario += salario;
        somaFilhos += filhos;
        total++;

        // Verifica o maior salário
        if(salario > maiorSalario) maiorSalario = salario;

        // Conta salários até 100 reais
        if(salario <= 100) ate100++;
    }

    // Exibe as médias e estatísticas se houver dados
    if(total > 0) {
        printf("Media salarial: %.2f\n", somaSalario / total);
        printf("Media de filhos: %.2f\n", (float)somaFilhos / total);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual com salario ate R$100: %.2f%%\n", (float)ate100 / total * 100);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
