// Questão 26

#include <stdio.h>

int main() {
    float salario_bruto, salario_liquido, desconto_previdencia, desconto_imposto;

    // Leitura do salário bruto
    printf("Digite o salário bruto: ");
    scanf("%f", &salario_bruto);

    // Desconto de 10% para a previdência social
    desconto_previdencia = salario_bruto * 0.10;
    salario_bruto -= desconto_previdencia;

    // Desconto de 5% para imposto
    desconto_imposto = salario_bruto * 0.05;
    salario_liquido = salario_bruto - desconto_imposto;

    // Exibição do salário líquido
    printf("Salário bruto: %.2f\n", salario_bruto + desconto_previdencia + desconto_imposto);
    printf("Desconto Previdência: %.2f\n", desconto_previdencia);
    printf("Desconto Imposto: %.2f\n", desconto_imposto);
    printf("Salário líquido: %.2f\n", salario_liquido);

    return 0;
}
