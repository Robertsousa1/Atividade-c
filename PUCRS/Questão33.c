// Questão 33
#include <stdio.h>

int main() {
    int N;

    printf("Digite 20 valores de N para calcular a tabuada:\n");

    for(int i = 0; i < 20; i++) {
        scanf("%d", &N);

        printf("Tabuada de %d:\n", N);
        for(int j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N); // Exibe a tabuada de 1 até N
        }
    }

    return 0;
}
