// Questão 16

#include <stdio.h>

int main() {
    int a, b, temp;

    // Leitura dos valores para A e B
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // Troca dos valores
    temp = a;
    a = b;
    b = temp;

    // Exibição dos valores trocados
    printf("Valor de A após a troca: %d\n", a);
    printf("Valor de B após a troca: %d\n", b);

    return 0;
}
