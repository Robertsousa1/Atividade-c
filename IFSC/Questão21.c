// Questão 21

#include <stdio.h>

int main() {
    int a, b;

    // Leitura dos valores A e B
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // Cálculo da soma dos quadrados dos valores (A² + B²)
    printf("Soma dos quadrados dos valores: %d\n", (a * a) + (b * b));

    return 0;
}
