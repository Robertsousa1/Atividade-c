// Questão 65 
#include <stdio.h>

int main() {
    float nota1, nota2, media;

    // Solicita as duas notas
    printf("Digite as duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    // Calcula a média
    media = (nota1 + nota2) / 2;

    // Verifica se o aluno foi aprovado
    if (media > 5.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
