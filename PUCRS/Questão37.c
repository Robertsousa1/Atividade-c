// Questão 37
#include <stdio.h>

int main() {
    int X;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Série de X:\n");
    for(int i = 1; i <= 20; i++) {
        printf("1/%d ", i); // Exibe os termos da série
    }

    printf("\n");

    return 0;
}
