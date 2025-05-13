Questão 7

#include <stdio.h>

int main() {
    float RAIO, AREA;
    const float PI = 3.14159;

    // Entrada do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &RAIO);

    // Cálculo da área
    AREA = PI * RAIO * RAIO;

    // Saída do resultado
    printf("A area da circunferencia e: %.2f\n", AREA);

    return 0;
}
