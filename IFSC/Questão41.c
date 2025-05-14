// Questão 41

#include <stdio.h>

int main() {
    float salarioMinimo = 1300.00;
    int carrosVendidos;
    float salarioFixo, comissaoCarros, totalVendas, salarioTotal;

    // Leitura do número de carros vendidos
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    // Cálculo do salário fixo e comissão
    salarioFixo = salarioMinimo * 2;  // Dois salários mínimos fixos
    comissaoCarros = carrosVendidos * 50.00;  // Comissão de R$ 50,00 por carro
    totalVendas = carrosVendidos * 20000.00;  // Supondo que cada carro custa R$ 20.000,00
    salarioTotal = salarioFixo + comissaoCarros + (totalVendas * 0.05);

    // Exibição do salário total
    printf("Salário total do vendedor: R$ %.2f\n", salarioTotal);

    return 0;
}
