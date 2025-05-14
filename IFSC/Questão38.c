// Questão 38

#include <stdio.h>

int main() {
    int A, B, C;

    // Leitura dos valores A, B e C
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Comparando a soma de A + B com C
    if (A + B < C) {
        printf("A soma de A e B é menor que C.\n");
    } else if (A + B > C) {
        printf("A soma de A e B é maior que C.\n");
    } else {
        printf("A soma de A e B é igual a C.\n");
    }

    return 0;
}
