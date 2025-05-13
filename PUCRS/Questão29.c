// Questão 29
#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;

    printf("Digite os números entre 13 e 73 (digite um número fora deste intervalo para terminar):\n");

    while(1) {
        scanf("%d", &num);

        if(num < 13 || num > 73) break; // Encerra a leitura se o número estiver fora do intervalo

        soma += num; // Soma os números dentro do intervalo
        cont++; // Conta os números dentro do intervalo
    }

    if(cont > 0) {
        printf("Média aritmética: %.2f\n", (float)soma / cont);
    } else {
        printf("Nenhum número foi inserido dentro do intervalo.\n");
    }

    return 0;
}
