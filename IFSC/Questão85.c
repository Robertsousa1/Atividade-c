// Questão 85 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    // Exibe o menu
    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &jogador);

    // Gera jogada do computador aleatoriamente entre 1 e 3
    srand(time(NULL));  // Inicializa o gerador de números aleatórios
    computador = rand() % 3 + 1;

    // Exibe a jogada do computador
    printf("Computador escolheu: ");
    if (computador == 1) printf("Pedra\n");
    else if (computador == 2) printf("Papel\n");
    else printf("Tesoura\n");

    // Determina o resultado
    if (jogador
