// Questão 95 
#include <stdio.h>

int main() {
    float altura, somaAltura20 = 0;
    int idade, somaIdadeMenores = 0;
    int contAltura20 = 0, contIdadeMenores = 0;

    // Lê dados dos 45 alunos
    for (int i = 1; i <= 45; i++) {
        printf("Aluno %d:\n", i);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if (altura < 1.70) {
            somaIdadeMenores += idade;
            contIdadeMenores++;
        }

        if (idade > 20) {
            somaAltura20 += altura;
            contAltura20++;
        }
    }

    if (contIdadeMenores > 0)
        printf("Media de idade dos alunos com menos de 1.70m: %.2f\n", (float)somaIdadeMenores / contIdadeMenores);
    else
        printf("Nenhum aluno com menos de 1.70m.\n");

    if (contAltura20 > 0)
        printf("Media de altura dos alunos com mais de 20 anos: %.2f\n", somaAltura20 / contAltura20);
    else
        printf("Nenhum aluno com mais de 20 anos.\n");

    return 0;
}
