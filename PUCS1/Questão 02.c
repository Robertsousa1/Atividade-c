"Questao 2"
#include <stdio.h>

int main() {
    int N, i, j;
    float E = 1.0;
    int fatorial;

    printf("Digite um número inteiro e positivo N: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        fatorial = 1;
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("O valor de E é: %.5f\n", E);

    return 0;
}
