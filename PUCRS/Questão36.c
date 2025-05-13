// Questão 36
#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for(int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N;

    printf("Digite o número N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        printf("Fatorial de %d é: %d\n", i, fatorial(i)); // Exibe o fatorial de cada número
    }

    return 0;
}
