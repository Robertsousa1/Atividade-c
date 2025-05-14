// Questão 53

#include <stdio.h>

int main() {
    int a, b, c;

    // Leitura dos três números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    // Ordenação em ordem decrescente
    if (a < b) { int temp = a; a = b; b = temp; }
    if (a < c) { int temp = a; a = c; c = temp; }
    if (b < c) { int temp = b; b = c; c = temp; }

    // Exibição dos valores em ordem decrescente
    printf("Ordem decrescente: %d, %d, %d\n", a, b, c);

    return 0;
}
