// Questão 15

#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usados;

    // Leitura do tempo gasto e da velocidade média
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // Cálculo da distância percorrida (DISTANCIA = TEMPO * VELOCIDADE)
    distancia = tempo * velocidade;

    // Cálculo da quantidade de litros usados (LITROS_USADOS = DISTANCIA / 12)
    litros_usados = distancia / 12;

    // Exibição dos resultados
    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros usados: %.2f litros\n", litros_usados);

    return 0;
}
