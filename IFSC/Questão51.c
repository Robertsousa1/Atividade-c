// Questão 51

#include <stdio.h>

int main() {
    int a, b;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Verificar qual é o maior
    if (a > b) {
        printf("O maior número é: %d\n", a);
    } else {
        printf("O maior número é: %d\n", b);
    }

    return 0;
}
