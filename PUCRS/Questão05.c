// Questão 5
#include <stdio.h>

int main() {
    int valor, soma = 0, count = 0;

    // Loop até valor negativo ser lido
    while(1) {
        printf("Digite um valor (negativo para sair): ");
        scanf("%d", &valor);

        if(valor < 0) break; // Sai do loop

        soma += valor; // Soma os valores
        count++;       // Conta quantos valores foram lidos
    }

    // Calcula e mostra a média se houve valores válidos
    if(count > 0) {
        printf("Media: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum valor positivo inserido.\n");
    }

    return 0;
}
