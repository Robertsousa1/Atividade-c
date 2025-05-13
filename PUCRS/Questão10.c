// Questão 10
#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, maior, media;

    while(1) {
        printf("Digite o codigo do aluno (negativo para sair): ");
        scanf("%d", &codigo);
        if(codigo < 0) break; // Encerra o loop

        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        // Determina a maior nota e calcula a média ponderada
        if(n1 >= n2 && n1 >= n3) {
            maior = n1;
            media = (n1*4 + n2*3 + n3*3) / 10;
        } else if(n2 >= n1 && n2 >= n3) {
            maior = n2;
            media = (n2*4 + n1*3 + n3*3) / 10;
        } else {
            maior = n3;
            media = (n3*4 + n1*3 + n2*3) / 10;
        }

        // Exibe o código do aluno, as notas e a média
        printf("Codigo: %d\nNotas: %.1f, %.1f, %.1f\n", codigo, n1, n2, n3);
        printf("Media ponderada: %.2f\n", media);

        // Exibe a situação do aluno
        printf("%s\n", media >= 5.0 ? "APROVADO" : "REPROVADO");
    }

    return 0;
}
