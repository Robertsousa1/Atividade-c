// Questão 94 
#include <stdio.h>

int main() {
    int A, B, modulo;

    // a) Executar 10 vezes
    printf("Executando 10 vezes:\n");
    for (int i = 0; i < 10; i++) {
        printf("Iteracao %d\n", i+1);
        printf("Digite A e B: ");
        scanf("%d %d", &A, &B);
        modulo = A % B;
        printf("Modulo = %d\n", modulo);
    }

    // b) Não executar nenhuma vez
    printf("Nao executa nenhuma vez:\n");
    for (int i = 0; i < 0; i++) {
        // Este bloco não é executado
    }

    // c) 100 vezes usando duas estruturas
    printf("Executando 100 vezes com duas estruturas:\n");
    int j = 0;
    while (j < 50) {
        for (int k = 0; k < 2; k++) {
            printf("Iteracao %d\n", j*2 + k + 1);
            printf("Digite A e B: ");
            scanf("%d %d", &A, &B);
            modulo = A % B;
            printf("Modulo = %d\n", modulo);
        }
        j++;
    }

    // d) N vezes
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Iteracao %d\n", i+1);
        printf("Digite A e B: ");
        scanf("%d %d", &A, &B);
        modulo = A % B;
        printf("Modulo = %d\n", modulo);
    }

    return 0;
}
