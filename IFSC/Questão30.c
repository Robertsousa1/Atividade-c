// Questão 30

#include <stdio.h>

int main() {
    int matricula, ano, semestre;

    // Leitura do número da matrícula
    printf("Digite o número de matrícula (AASDDD): ");
    scanf("%d", &matricula);

    // Extração do ano, semestre e número de matrícula
    ano = matricula / 10000;  // AASDDD => os dois primeiros algarismos representam o ano
    semestre = (matricula / 1000) % 10;  // O terceiro algarismo é o semestre (1 ou 2)

    // Exibição do ano e semestre de matrícula
    printf("Ano de matrícula: 20%.2d\n", ano);
    printf("Semestre de matrícula: %d\n", semestre);

    return 0;
}
