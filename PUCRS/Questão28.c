// Questão 28
#include <stdio.h>

int main() {
    int n;
    float S = 1.0;

    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        printf("1/%d + ", i); // Exibe cada termo gerado
        S += 1.0 / i; // Soma o termo à variável S
    }

    printf("\nSoma final de S: %.2f\n", S);
    return 0;
}
