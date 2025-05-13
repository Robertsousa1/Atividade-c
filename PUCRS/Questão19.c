// Questão 19
#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0, soma = 0, total = 0;

    while(1) {
        printf("Digite um numero (zero para sair): ");
        scanf("%d", &num);

        if(num == 0) break; // Encerra quando 0 for digitado

        soma += num;  // Soma os números lidos
        total++;      // Conta os números lidos

        if(num % 2 == 0) {
            pares++;   // Conta números pares
        } else {
            impares++; // Conta números ímpares
        }
    }

    // Exibe os resultados
    if(total > 0) {
        printf("Quantidade de pares: %d\n", pares);
        printf("Quantidade de impares: %d\n", impares);
        printf("Media de valores pares: %.2f\n", (pares > 0 ? (float)soma / pares : 0));
        printf("Media geral: %.2f\n", (float)soma / total);
    }

    return 0;
}
