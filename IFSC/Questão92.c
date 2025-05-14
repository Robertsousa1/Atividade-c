// Questão 92 

#include <stdio.h>

int main() {
    int N, A = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    // Soma de N até 1
    for (int i = N; i >= 1; i--) {
        A += i;
    }

    printf("O valor de A e: %d\n", A);
    return 0;
}
