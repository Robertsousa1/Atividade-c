// Questão 1
#include <stdio.h>

int main() {
    int a, i, negativos = 0; // Variáveis para o número lido, contador do loop e total de negativos

    // Laço para ler 5 valores
    for(i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &a); // Lê o valor

        // Verifica se o valor é negativo
        if(a < 0) {
            negativos++; // Incrementa o contador de negativos
        }
    }

    // Exibe o resultado
    printf("Quantidade de valores negativos: %d\n", negativos);
    return 0;
}

