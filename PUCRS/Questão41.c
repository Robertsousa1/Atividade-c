//Questão 41

#include <stdio.h>

int main() {
    float n1, n2, n3, media, mediaGeral = 0;
    int i;

    // Laço para ler as notas de 50 alunos
    for(i = 1; i <= 50; i++) {
        printf("Aluno %d - Nota 1: ", i);
        scanf("%f", &n1);  // Lê a primeira nota
        printf("Nota 2: ");
        scanf("%f", &n2);  // Lê a segunda nota
        printf("Nota 3: ");
        scanf("%f", &n3);  // Lê a terceira nota

        // Calcula a média ponderada com os pesos: n1*2, n2*4 e n3*3
        media = (n1*2 + n2*4 + n3*3) / 10;
        mediaGeral += media;  // Acumula a média dos alunos para calcular a média geral

        // Exibe a média e a situação do aluno (Aprovado ou Reprovado)
        printf("Média: %.2f - %s\n", media, (media >= 7.0) ? "Aprovado" : "Reprovado");
    }

    // Exibe a média geral de todos os alunos
    printf("Média geral da turma: %.2f\n", mediaGeral / 50);
    return 0;
}
