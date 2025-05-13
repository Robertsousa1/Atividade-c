Questao12

#include <stdio.h>

int main() {
    float C, F;

    // Ler a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    // Calcular Fahrenheit
    F = (9 * C + 160) / 5;

    // Mostrar o resultado
    printf("Temperatura em Fahrenheit: %.2f\n", F);

    return 0;
}
