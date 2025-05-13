//Questão 49

#include <stdio.h>

int main() {
    int n, fatorial = 1;

    // Solicita o valor de N
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    // Calcula o fatorial de N
    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    // Exibe o fatorial de N
    printf("Fatorial de %d é %d\n", n, fatorial);
    return 0;
}
