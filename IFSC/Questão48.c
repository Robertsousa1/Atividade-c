// Questão 48

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

    // Encontrar o menor número
    if (a < b && a < c) {
        printf("O menor número é: %d\n", a);
    } else if (b < a && b < c) {
        printf("O menor número é: %d\n", b);
    } else {
        printf("O menor número é: %d\n", c);
    }

    return 0;
}
