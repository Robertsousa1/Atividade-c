// Questão 31

#include <stdio.h>

int main() {
    int A, B;

    // Leitura dos dois números
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Comparação para encontrar o maior número
    if (A > B) {
        printf("O maior número é: %d\n", A);
    } else {
        printf("O maior número é: %d\n", B);
    }

    return 0;
}
