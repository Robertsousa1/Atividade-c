// Questão 13

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Leitura da temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Cálculo da conversão para Celsius (C = (F - 32) * (5 / 9))
    celsius = (fahrenheit - 32) * (5 / 9.0);

    // Exibição da temperatura convertida para Celsius
    printf("Temperatura em Celsius: %.2f\n", celsius);

    return 0;
}
