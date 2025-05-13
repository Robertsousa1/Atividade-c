// Questão 8
#include <stdio.h>

int main() {
    int num, soma = 0, count = 0;

    while(1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        if(num == 0) break; // Encerra o loop

        // Somente números pares são somados
        if(num % 2 == 0) {
            soma += num;  // Soma os números pares
            count++;      // Conta quantos números pares foram lidos
        }
    }

    // Exibe a média dos números pares
    if(count > 0) {
        printf("Media dos pares: %.2f\n", (float)soma / count);
    } else {
        printf("Nenhum numero par inserido.\n");
    }

    return 0;
}
