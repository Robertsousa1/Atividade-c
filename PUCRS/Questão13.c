// Questão 13
#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    int f = 1;
    for(int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, i;

    printf("Digite a quantidade de valores para calcular o fatorial: ");
    scanf("%d", &n);

    // Laço para ler n valores e calcular o fatorial de cada um
    for(i = 1; i <= n; i++) {
        int valor;
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        printf("Fatorial de %d: %d\n", valor, fatorial(valor));
    }

    return 0;
}
