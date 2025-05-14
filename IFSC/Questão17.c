// Questão 17

#include <stdio.h>

int main() {
    int a, b, c, d;

    // Leitura dos valores A, B, C e D
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("Digite o valor de D: ");
    scanf("%d", &d);

    // Cálculos conforme a propriedade distributiva
    printf("A + B: %d\n", a + b);
    printf("A + C: %d\n", a + c);
    printf("A + D: %d\n", a + d);
    printf("B + C: %d\n", b + c);
    printf("B + D: %d\n", b + d);
    printf("C + D: %d\n", c + d);

    printf("A * B: %d\n", a * b);
    printf("A * C: %d\n", a * c);
    printf("A * D: %d\n", a * d);
    printf("B * C: %d\n", b * c);
    printf("B * D: %d\n", b * d);
    printf("C * D: %d\n", c * d);

    return 0;
}
