// Questão 8

#include <stdio.h>

int main() {
    float area, base, altura;

    // Leitura da base e altura do triângulo
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);

    // Cálculo da área do triângulo (A = (base * altura) / 2)
    area = (base * altura) / 2;

    // Exibição do resultado da área
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
