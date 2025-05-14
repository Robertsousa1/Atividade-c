// Questão 24

#include <stdio.h>

int main() {
    float kmh, ms;

    // Leitura da velocidade em km/h
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    // Conversão de km/h para m/s (1 km/h = 1000 m / 3600 s)
    ms = kmh * 1000 / 3600;

    // Exibição da velocidade convertida
    printf("A velocidade em m/s é: %.2f\n", ms);

    return 0;
}
