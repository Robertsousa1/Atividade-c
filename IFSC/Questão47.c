// Questão 47

#include <stdio.h>

int main() {
    int a, b, c;

    // Leitura dos três valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    // Ordenação em ordem crescente
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }

    // Exibição dos valores ordenados
    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
