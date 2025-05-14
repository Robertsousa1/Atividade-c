// Questão 40

#include <stdio.h>

int main() {
    char nome[100];
    int parafusos, porcas, arruelas;
    float precoParafuso, precoPorca, precoArruela;
    float descontoParafuso, descontoPorca, descontoArruela;
    float totalCompra, totalDesconto, totalPago;

    // Leitura do nome do cliente e quantidade de peças
    printf("Digite o nome do cliente: ");
    scanf("%s", nome);
    printf("Digite o número de parafusos: ");
    scanf("%d", &parafusos);
    printf("Digite o número de porcas: ");
    scanf("%d", &porcas);
    printf("Digite o número de arruelas: ");
    scanf("%d", &arruelas);

    // Preços das peças
    precoParafuso = 2.00;
    precoPorca = 1.50;
    precoArruela = 1.00;

    // Cálculo dos descontos
    descontoParafuso = parafusos * precoParafuso * 0.20;
    descontoPorca = porcas * precoPorca * 0.10;
    descontoArruela = arruelas * precoArruela * 0.30;

    // Cálculo do total da compra e do total de descontos
    totalCompra = (parafusos * precoParafuso) + (porcas * precoPorca) + (arruelas * precoArruela);
    totalDesconto = descontoParafuso + descontoPorca + descontoArruela;
    totalPago = totalCompra - totalDesconto;

    // Exibição do resultado
    printf("Cliente: %s\n", nome);
    printf("Número de parafusos: %d, preço unitário: R$ %.2f\n", parafusos, precoParafuso);
    printf("Número de porcas: %d, preço unitário: R$ %.2f\n", porcas, precoPorca);
    printf("Número de arruelas: %d, preço unitário: R$ %.2f\n", arruelas, precoArruela);
    printf("Desconto para parafusos: R$ %.2f\n", descontoParafuso);
    printf("Desconto para porcas: R$ %.2f\n", descontoPorca);
    printf("Desconto para arruelas: R$ %.2f\n", descontoArruela);
    printf("Total de descontos: R$ %.2f\n", totalDesconto);
    printf("Total a pagar: R$ %.2f\n", totalPago);

    return 0;
}
