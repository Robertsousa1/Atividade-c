// Questão 18
#include <stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    int f = 1;
    for(int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

// Função para calcular a soma dos inteiros de 1 até m
int somaInteiros(int m) {
    int soma = 0;
    for(int i = 1; i <= m; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int m;

    while(1) {
        printf("Digite um numero m (positivo): ");
        scanf("%d", &m);

        if(m <= 0) break; // Encerra se m for não positivo

        if(m % 2 == 0) { // Se m for par
            int divisores = 0;
            for(int i = 1; i <= m; i++) {
                if(m % i == 0) divisores++; // Conta divisores
            }
            printf("Numero de divisores de %d: %d\n", m, divisores);
        } else if(m < 10) { // Se m for ímpar e menor que 10
            printf("Fatorial de %d: %d\n", m, fatorial(m));
        } else { // Se m for ímpar e maior ou igual a 10
            printf("Soma dos inteiros de 1 a %d: %d\n", m, somaInteiros(m));
        }
    }

    return 0;
}
