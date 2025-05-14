// Questão 56

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

    // Encontrar o maior valor
    if (a > b && a > c) {
        printf("%d É o maior\n", a);
    } else if (b > a && b > c) {
        printf("%d É o maior\n", b);
    } else {
        printf("%d É o maior\n", c);
    }

    return 0;
}
