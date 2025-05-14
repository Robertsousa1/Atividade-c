// Questão 44

#include <stdio.h>

int main() {
    int picole1, picole2, picole3;
    float preco1 = 0.50, preco2 = 0.60, preco3 = 0.75;
    float total1, total2, total3;

    // Leitura da quantidade de picolés vendidos
    printf("Digite a quantidade de picolé tipo 1: ");
    scanf("%d", &picole1);
    printf("Digite a quantidade de picolé tipo 2: ");
    scanf("%d", &picole2);
    printf("Digite a quantidade de picolé tipo 3: ");
    scanf("%d", &picole3);

    // Cálculo do total arrecadado
    total1 = picole1 * preco1;
    total2 = picole2 * preco2;
    total3 = picole3 * preco3;

    // Exibição do total arrecadado
    printf("Picolé tipo 1: R$ %.2f\n", total1);
    printf("Picolé tipo 2: R$ %.2f\n", total2);
    printf("Picolé tipo 3: R$ %.2f\n", total3);
    printf("Total arrecadado: R$ %.2f\n", total1 + total2 + total3);

    return 0;
}
