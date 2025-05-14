// Questão 29

#include <stdio.h>

int main() {
    int data, dia, mes, ano;

    // Leitura da data no formato DDMMAA
    printf("Digite a data no formato DDMMAA: ");
    scanf("%d", &data);

    // Extração do dia, mês e ano
    dia = data / 10000;
    mes = (data / 100) % 100;
    ano = data % 100;

    // Exibição da data no formato AAMMDD
    printf("A data no formato AAMMDD é: %.2d%.2d%.2d\n", ano, mes, dia);

    return 0;
}
