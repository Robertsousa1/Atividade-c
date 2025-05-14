// Questão 50

#include <stdio.h>

int main() {
    int nota;

    // Leitura da nota do aluno
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    // Verificar o conceito baseado na nota
    if (nota < 50) {
        printf("Conceito: Insuficiente\n");
    } else if (nota >= 50 && nota < 70) {
        printf("Conceito: Regular\n");
    } else if (nota >= 70 && nota < 90) {
        printf("Conceito: Bom\n");
    } else {
        printf("Conceito: Ótimo\n");
    }

    return 0;
}
