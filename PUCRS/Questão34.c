// Questão 34
#include <stdio.h>

int main() {
    int aluno, maiorAluno, menorAluno;
    float altura, maiorAltura = 0, menorAltura = 999;

    printf("Digite 5 conjuntos de aluno e altura (aluno, altura):\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d %f", &aluno, &altura);

        if(altura > maiorAltura) {
            maiorAltura = altura;
            maiorAluno = aluno;
        }

        if(altura < menorAltura) {
            menorAltura = altura;
            menorAluno = aluno;
        }
    }

    printf("Aluno mais alto: %d com %.2f cm\n", maiorAluno, maiorAltura);
    printf("Aluno mais baixo: %d com %.2f cm\n", menorAluno, menorAltura);

    return 0;
}
