// Questão 2
#include <stdio.h>

int main() {
    int N, i, j, fatorial;
    float E = 1.0; // Começa com 1 (primeiro termo da série)

    printf("Digite um valor positivo: ");
    scanf("%d", &N); // Lê o valor de N

    // Laço externo para calcular os termos de 1/1! até 1/N!
    for(i = 1; i <= N; i++) {
        fatorial = 1; // Reinicia o fatorial

        // Calcula o fatorial de i
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }

        // Adiciona o termo à soma
        E += 1.0 / fatorial;
    }

    // Exibe o resultado de E
    printf("Valor de E: %.6f\n", E);
    return 0;
}
