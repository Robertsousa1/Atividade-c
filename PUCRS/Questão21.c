// Questão 21
#include <stdio.h>

int main() {
    int num, produtório = 1;

    while(1) {
        printf("Digite um numero positivo (0 para sair): ");
        scanf("%d", &num);

        if(num == 0) break; // Encerra a leitura quando 0 for digitado

        if(num % 2 == 0) {
            produtório *= num;  // Multiplica os números pares
        }
    }

    printf("O produtório dos números pares é: %d\n", produtório);
    return 0;
}
