Questao11

#include <stdio.h>

int main() {
    float HT, VH, PD;        // Horas trabalhadas, valor por hora, percentual de desconto
    float SB, TD, SL;        // Salário bruto, total de desconto, salário líquido

    // a) Obter horas trabalhadas
    printf("Digite as horas trabalhadas (HT): ");
    scanf("%f", &HT);

    // b) Obter valor da hora trabalhada
    printf("Digite o valor da hora trabalhada (VH): ");
    scanf("%f", &VH);

    // c) Obter percentual de desconto
    printf("Digite o percentual de desconto (PD): ");
    scanf("%f", &PD);

    // d) Calcular salário bruto
    SB = HT * VH;

    // e) Calcular total de desconto
    TD = (PD / 100) * SB;

    // f) Calcular salário líquido
    SL = SB - TD;

    // g) Mostrar os resultados
    printf("\n--- Resultado ---\n");
    printf("Horas Trabalhadas: %.2f\n", HT);
    printf("Salário Bruto: R$ %.2f\n", SB);
    printf("Desconto: R$ %.2f\n", TD);
    printf("Salário Líquido: R$ %.2f\n", SL);

    return 0;
}
