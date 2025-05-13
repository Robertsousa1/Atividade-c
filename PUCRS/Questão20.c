// Questão 20
#include <stdio.h>

int main() {
    int num, somaNegativos = 0;

    while(1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        if(num == 0) break; // Encerra quando 0 for digitado

        if(num < 0) {
            somaNegativos += num;  // Acumula a soma dos números negativos
        }
    }

    // Exibe a soma dos números negativos
    printf("Soma dos numeros negativos: %d\n", somaNegativos);
    return 0;
}
