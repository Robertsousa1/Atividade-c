// Questão 17
#include <stdio.h>

int main() {
    int m, n, soma, i;

    while(1) {
        printf("Digite um valor para m (positivo): ");
        scanf("%d", &m);
        printf("Digite um valor para n (positivo): ");
        scanf("%d", &n);

        if(m <= 0 || n <= 0) break; // Encerra a leitura se m ou n forem não positivos

        soma = 0;
        // Soma dos n inteiros consecutivos a partir de m
        for(i = m; i < m + n; i++) {
            soma += i;
        }

        // Exibe o resultado
        printf("Soma dos %d inteiros consecutivos a partir de %d: %d\n", n, m, soma);
    }

    return 0;
}
