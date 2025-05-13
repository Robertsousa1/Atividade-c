Questao26

#include <stdio.h>

int main() {
    float salarioBruto;
    float desconto1, desconto2;
    float salarioLiquido;

    // Pede o salário bruto
    printf("Digite o salário bruto: ");
    scanf("%f", &salarioBruto);

    // Calcula o primeiro desconto de 10%
    desconto1 = salarioBruto * 0.10;

    // Subtrai o primeiro desconto
    salarioBruto = salarioBruto - desconto1;

    // Calcula o segundo desconto de 5%
    desconto2 = salarioBruto * 0.05;

    // Subtrai o segundo desconto
    salarioLiquido = salarioBruto - desconto2;

    // Mostra o salário líquido
    printf("Salário líquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
