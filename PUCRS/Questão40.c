// Questão 40
#include <stdio.h>

// Função para calcular o somatório dos inteiros de 1 até m
int somatorio(int m) {
    int soma = 0;
    for(int i = 1; i <= m; i++) {
        soma += i;
    }
    return soma;
}

// Função para calcular o fatorial de m
int fatorial(int m) {
    int fat = 1;
    for(int i = 1; i <= m; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n, m;

    printf("Digite o número de valores que serão lidos: ");
    scanf("%d", &n);

    printf("Digite os %d valores de m:\n", n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &m);

        printf("Valor lido: %d\n", m);
        printf("Somatório de 1 até %d: %d\n", m, somatorio(m)); // Exibe o somatório
        printf("Fatorial de %d: %d\n", m, fatorial(m)); // Exibe o fatorial
    }

    return 0;
}
