// Questão 14
#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0, total = 0;
    float soma = 0;

    while(1) {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &num);
        
        if(num == 0) break; // Encerra a leitura quando 0 é digitado

        soma += num; // Acumula a soma
        total++;     // Conta os números lidos

        if(num > 0) positivos++;  // Conta valores positivos
        else negativos++;          // Conta valores negativos
    }

    // Exibe os resultados
    if(total > 0) {
        printf("Media aritmetica: %.2f\n", soma / total);
        printf("Quantidade de positivos: %d\n", positivos);
        printf("Quantidade de negativos: %d\n", negativos);
        printf("Percentual de positivos: %.2f%%\n", (float)positivos / total * 100);
        printf("Percentual de negativos: %.2f%%\n", (float)negativos / total * 100);
    } else {
        printf("Nenhum valor inserido.\n");
    }

    return 0;
}
