// Questão 32

#include <stdio.h>

int main() {
    int N;

    // Leitura do valor de N
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    // Verificação das condições para imprimir F1, F2 ou F3
    if (N <= 10) {
        printf("F1\n");
    } else if (N <= 100) {
        printf("F2\n");
    } else {
        printf("F3\n");
    }

    return 0;
}
