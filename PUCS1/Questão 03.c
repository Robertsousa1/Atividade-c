"Questao 3"
#include <stdio.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, totalPessoas = 0, somaFilhos = 0, salarioBaixo = 0;

    printf("Digite o salario (valor negativo encerra): ");
    scanf("%f", &salario);

    while(salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if(salario > maiorSalario) {
            maiorSalario = salario;
        }

        if(salario <= 100) {
            salarioBaixo++;
        }

        printf("Digite o salario (valor negativo encerra): ");
        scanf("%f", &salario);
    }

    if(totalPessoas > 0) {
        printf("Media do salario: %.2f\n", somaSalario / totalPessoas);
        printf("Media do numero de filhos: %.2f\n", (float)somaFilhos / totalPessoas);
        printf("Maior salario: %.2f\n", maiorSalario);
        printf("Percentual com salario até R$100,00: %.2f%%\n", (float)salarioBaixo / totalPessoas * 100);
    } else {
        printf("Nenhum dado inserido.\n");
    }

    return 0;
}
