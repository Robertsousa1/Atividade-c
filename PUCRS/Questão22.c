// Questão 22
#include <stdio.h>

int main() {
    int idade, totalIdade = 0, numMulheres = 0, numHabitantes = 0;
    float salario, somaSalarios = 0;
    char sexo;
    int maiorIdade = -1, menorIdade = 999, mulheresSalarioBaixo = 0;

    while(1) {
        printf("Digite a idade (negativa para sair): ");
        scanf("%d", &idade);
        
        if(idade < 0) break; // Encerra a leitura se idade for negativa

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        // Atualiza a soma dos salários e o número total de habitantes
        somaSalarios += salario;
        numHabitantes++;

        // Calcula maior e menor idade
        if(idade > maiorIdade) maiorIdade = idade;
        if(idade < menorIdade) menorIdade = idade;

        // Conta mulheres com salário até R$100,00
        if(sexo == 'F' && salario <= 100) mulheresSalarioBaixo++;

        totalIdade += idade;

    }

    // Exibe os resultados
    if(numHabitantes > 0) {
        printf("Media do salario do grupo: %.2f\n", somaSalarios / numHabitantes);
        printf("Maior idade do grupo: %d\n", maiorIdade);
        printf("Menor idade do grupo: %d\n", menorIdade);
        printf("Quantidade de mulheres com salario ate R$100,00: %d\n", mulheresSalarioBaixo);
    }

    return 0;
}
