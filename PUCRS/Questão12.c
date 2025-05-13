// Questão 12
#include <stdio.h>

int main() {
    int n, i;

    printf("Digite o numero para calcular a tabuada: ");
    scanf("%d", &n);

    // Loop para exibir a tabuada de 1 até n
    for(i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }

    return 0;
}
