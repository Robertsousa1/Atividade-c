//Questão 44

#include <stdio.h>
#include <string.h>

int main() {
    int i, cod, veiculos, acidentes;
    int maiorIndice = -1, menorIndice = 1000000;
    int codMaior, codMenor;
    char estado[3], estadoMaior[3], estadoMenor[3];
    int totalVeiculos = 0, totalRS = 0, cidadesRS = 0;

    // Laço para ler os dados de 200 cidades
    for(i = 0; i < 200; i++) {
        printf("Cidade %d - Código: ", i+1);
        scanf("%d", &cod);  // Lê o código da cidade
        printf("Estado (ex: RS): ");
        scanf("%s", estado);  // Lê o estado da cidade
        printf("Veículos: ");
        scanf("%d", &veiculos);  // Lê o número de veículos
        printf("Acidentes com vítimas: ");
        scanf("%d", &acidentes);  // Lê o número de acidentes com vítimas

        // Verifica se o número de acidentes é o maior
        if(acidentes > maiorIndice) {
            maiorIndice = acidentes;
            codMaior = cod;
            strcpy(estadoMaior, estado);  // Armazena o código e o estado da cidade com maior índice
        }

        // Verifica se o número de acidentes é o menor
        if(acidentes < menorIndice) {
            menorIndice = acidentes;
            codMenor = cod;
            strcpy(estadoMenor, estado);  // Armazena o código e o estado da cidade com menor índice
        }

        // Soma o número de veículos para calcular a média geral
        totalVeiculos += veiculos;

        // Verifica se a cidade pertence ao Rio Grande do Sul (RS)
        if(strcmp(estado, "RS") == 0) {
            totalRS += acidentes;
            cidadesRS++;  // Conta quantas cidades do RS foram lidas
        }
    }

    // Exibe as estatísticas
    printf("\nMaior índice de acidentes: %d - Cidade: %d (%s)\n", maiorIndice, codMaior, estadoMaior);
    printf("Menor índice de acidentes: %d - Cidade: %d (%s)\n", menorIndice, codMenor, estadoMenor);
    printf("Média de veículos nas cidades: %.2f\n", totalVeiculos / 200.0);

    // Exibe a média de acidentes para as cidades do Rio Grande do Sul
    if(cidadesRS > 0) {
        printf("Média de acidentes no RS: %.2f\n", totalRS / (float)cidadesRS);
    } else {
        printf("Nenhuma cidade do RS foi cadastrada.\n");
    }

    return 0;
}
