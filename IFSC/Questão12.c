// Questão 12

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Leitura da temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Cálculo da conversão para Fahrenheit (F = (9 * C + 160) / 5)
    fahrenheit = (9 * celsius + 160) / 5;

    // Exibição da temperatura convertida para Fahrenheit
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
