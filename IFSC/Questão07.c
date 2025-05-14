// Questão 7

#include <stdio.h>

// Definindo o valor de PI como uma constante
#define PI 3.14159

int main() {
    float area, raio;

    // Leitura do valor do raio da circunferência
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    // Cálculo da área da circunferência (A = π * r^2)
    area = PI * raio * raio;

    // Exibição do resultado da área
    printf("A área da circunferência é: %.2f\n", area);

    return 0;
}
