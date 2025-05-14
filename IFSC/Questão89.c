// Questão 89 

#include <stdio.h>

int main() {
    int valor, somaPositivos = 0, negativos = 0;

    // Lê 50 valores e processa cada um
    for (int i = 1; i <= 50; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);

        if (valor >= 0)
            somaPositivos += valor;
        else
            negativos++;
    }

    printf("Soma dos positivos: %d\n", somaPositivos);
    printf("Quantidade de negativos: %d\n", negativos);
    return 0;
}
