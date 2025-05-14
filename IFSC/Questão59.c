// Questão 59

#include <stdio.h>

int main() {
    int numero;

    // Leitura do número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificar se é par ou ímpar e positivo ou negativo
    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    if (numero >= 0) {
        printf("O número é positivo\n");
    } else {
        printf("O número é negativo\n");
    }

    return 0;
}
