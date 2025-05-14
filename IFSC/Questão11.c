// Questão 11

#include <stdio.h>

int main() {
    float ht, vh, pd, sb, td, sl;

    // Leitura das variáveis: horas trabalhadas, valor da hora e percentual de desconto
    printf("Digite as horas trabalhadas no mês: ");
    scanf("%f", &ht);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &vh);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &pd);

    // Cálculo do salário bruto (SB = HT * VH)
    sb = ht * vh;

    // Cálculo do total de desconto (TD = (PD/100) * SB)
    td = (pd / 100) * sb;

    // Cálculo do salário líquido (SL = SB - TD)
    sl = sb - td;

    // Exibição dos resultados
    printf("Horas trabalhadas: %.2f\n", ht);
    printf("Salário Bruto: %.2f\n", sb);
    printf("Desconto: %.2f\n", td);
    printf("Salário Líquido: %.2f\n", sl);

    return 0;
}
