Questão 45

#include <stdio.h>

int main() {
    int sexo, idade, count = 0, idadeTotal = 0, idadeHomens = 0, countHomens = 0, countMulheres = 0, idadeMulheres = 0;
    float altura, alturaMulheres = 0, percentualIdade = 0, total = 1000;
    int idade18a35 = 0;

    // Laço para coletar os dados de 1000 habitantes
    do {
        printf("Digite o sexo (0-feminino, 1-masculino): ");
        scanf("%d", &sexo);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        idadeTotal += idade;  // Soma as idades para calcular a média
        count++;  // Contabiliza o número de pessoas

        // Para calcular a média de idade dos homens e mulheres
        if(sexo == 0) {
            idadeMulheres += idade;  // Soma as idades das mulheres
            alturaMulheres += altura;  // Soma as alturas das mulheres
            countMulheres++;  // Contabiliza o número de mulheres
        } else if(sexo == 1) {
            idadeHomens += idade;  // Soma as idades dos homens
            countHomens++;  // Contabiliza o número de homens
        }

        // Calcula o percentual de pessoas com idade entre 18 e 35 anos
        if(idade >= 18 && idade <= 35) {
            idade18a35++;  // Conta as pessoas nessa faixa etária
        }

    } while(count < 1000);  // Repete até coletar dados de 1000 pessoas

    // Cálculos das médias e percentuais
    printf("\nMédia da idade do grupo: %.2f\n", (float)idadeTotal / total);
    if(countMulheres > 0) {
        printf("Média da altura das mulheres: %.2f\n", alturaMulheres / countMulheres);
        printf("Média da idade das mulheres: %.2f\n", (float)idadeMulheres / countMulheres);
    }
    if(countHomens > 0) {
        printf("Média da idade dos homens: %.2f\n", (float)idadeHomens / countHomens);
    }
    percentualIdade = (float)idade18a35 / total * 100;  // Percentual de pessoas com idade entre 18 e 35
    printf("Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", percentualIdade);

    return 0;
}
