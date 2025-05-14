// Questão 20

#include <stdio.h>

int main() {
    int a, b;

    // Leitura dos valores A e B
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // Cálculo do quadrado da soma (A + B)²
    printf("Quadrado da soma dos valores: %d\n", (a + b) * (a + b));

    return 0;
}
