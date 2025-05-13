// Questão 35
#include <stdio.h>

int main() {
    int sexo, maiorAltura = 0, menorAltura = 9999, totalMulheres = 0, totalPessoas = 0;
    float altura, somaAlturasMulheres = 0, somaAlturasTotal = 0;

    printf("Digite 50 informações de altura e sexo (1 para masculino, 2 para feminino):\n");

    for(int i = 0; i < 50; i++) {
        scanf("%f %d", &altura, &sexo);

        somaAlturasTotal += altura; // Soma das alturas de todas as pessoas
        if(sexo == 2) { // Se for mulher
            somaAlturasMulheres += altura;
            totalMulheres++;
        }

        // Atualiza maior e menor altura
        if(altura > maiorAltura) maiorAltura = altura;
        if(altura < menorAltura) menorAltura = altura;

        totalPessoas++;
    }

    printf("Maior altura: %.2f cm\n", maiorAltura);
    printf("Menor altura: %.2f cm\n", menorAltura);
    printf("Média da altura das mulheres: %.2f cm\n", totalMulheres > 0 ? somaAlturasMulheres / totalMulheres : 0);
    printf("Média da altura total da turma: %.2f cm\n", somaAlturasTotal / totalPessoas);

    return 0;
}
