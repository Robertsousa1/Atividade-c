// Questão 34

#include <stdio.h>

int main() {
    int A, B, C;

    // Leitura dos três valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Imprimindo os valores em ordem crescente
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // Exibição dos valores em ordem crescente
    printf("Os valores em ordem crescente são: %d, %d, %d\n", A, B, C);

    return 0;
}
